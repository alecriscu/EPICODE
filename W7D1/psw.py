import random   #importa il modulo random
import string   #importa il modulo string

def scegli_psw():       #definisco la funzione scegli_psw
    print("Questo programma genera una password casuale.")                  #stampo la presentazione
    complessa = string.digits + string.ascii_letters + string.punctuation   #definisco i caratteri che formeranno la variabile complessa tramite le funzioni del modulo string
    semplice = string.digits + string.ascii_letters                         #definisco i caratteri che formeranno la variabile semplice

    if input("Vuoi una password complessa? (s/n): ") == 's':    #condizione che chiede all'utente se vuole una password complessa
        lunghezza = 20                                          #definisco la  variabile lunghezza per la password complessa
        type = complessa                                        #definisco la variabile type come complessa
    elif input("Vuoi una password semplice? (s/n): ") == 's':   #condizione che chiede all'utente se vuole una password semplice
        lunghezza = 8                                           #definisco la variabile lunghezza per la password semplice
        type = semplice                                         #definisco la variabile type come semplice
    else:                      #altrimenti
        print("Input non valido. Per favore rispondi con 's' o 'n'.")  #stampo il messaggio di errore

    password = ""      #inizializzo la variabile password come stringa vuota
    counter = 0      #inizializzo il counter a 0

    while counter < lunghezza:          #ciclo while che continua fino a quando il counter è minore della lunghezza desiderata
        char = random.choice(type)      #seleziono un carattere casuale dalla variabile type e lo assegno a char
        password += char                #aggiungo il carattere selezionato alla variabile password
        counter += 1                    #incremento il counter di 1
    print(f"La tua password è: {password}")     #stampo la password generata
    #la f serve per formattare la stringa in modo che venga visualizzata la variabile password
    
scegli_psw()    #richiamo la funzione scegli_psw
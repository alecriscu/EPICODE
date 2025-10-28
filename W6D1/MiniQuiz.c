//mini game epicode
#include <stdio.h>          //include libreria standard input/output
#include <ctype.h>          //include libreria ctype (per toupper)

void introduzione() {                                       //funzione senza return per l'intro
    printf("Benvenuto in MiniQuiz!:\n");                    //stampa
    printf("Rispondi correttamente o morirai\n\n");
}

char menu_principale() {                                    //funzione con return di un carattere, per la scelta iniziale A o B
    char selezione;     //variabile selezione di 1 carattere

    printf("Scegli una delle due opzioni: \n");     //stampa
    printf("A. Nuova partita \n");
    printf("B. Esci dalla partita \n");
    printf("Selezione: ");

    scanf(" %c", &selezione);           //prende in input un carattere da assegnare a selezione
    return selezione;                   //restituisce selezione ed esce dalla funzione
}

int gioco() {           //funzione con return di un intero, per la logica del quiz
    char nome[30];      //variabile nome formata da 30 caratteri
    int punti = 0;      //variabile punti inizializzata a zero
    
    printf("\nInserisci il tuo nome: ");    //stampa
    scanf(" %s", &nome);                    //prende in input una stringa da assegnare a nome
    printf("\n Ciao %s!", nome);            //stampa la stringa nome

    //Prima domanda
    char risposta;      //dichiara variabile risposta (1 carattere)
    printf("\n Qual è il nome di battesimo di cicciogamer89? \n");        //stampa la domanda
    printf("A. Filippo\nB. Joker\nC. Mirko\n");
    printf("Risposta: ");

    scanf(" %c", &risposta);        //prende in input un carattere e lo assegna a risposta

    if(toupper(risposta) == 'C') {      //se la risposta è C (sia minuscolo che maiuscolo) esegue le istruzioni dentro if
        printf("Risposta esatta!\n");   //stampa Risposta esatta
        punti++;                        //incrementa punti
    } else {                            //altrimenti esegue le istruzioni dentro else
        printf("Errato :(\n");          //stampa Errato
    }

    //Seconda domanda
    printf("\n Chi ha creato la canzone Pasta col tonno? \n");       //stampa la domanda
    printf("A. Filippo Turetta\nB. Bello Figo\nC. Aldo Moro\n");
    printf("Risposta: ");

    //ho già dichiarato char risposta
    scanf(" %c", &risposta);                        //prende in input un carattere e lo assegna a risposta

    if(toupper(risposta) == 'B') {                  //se la risposta è B (sia minuscolo che maiuscolo) esegue le istruzioni dentro if
        printf("Risposta esatta\n");                //stampa Risposta esatta
        punti++;                                    //incrementa punti
    } else {                                        //altrimenti esegue le istruzioni dentro else
        printf("Errato\n");                         //stampa Errato
    }

    //Terza domanda
    printf("\n Chi tra questi è innocente? \n");             //stampa la domanda
    printf("A. Bossetti\nB. Ajeje Brazorf\nC. Jessie Pinkman\n");
    printf("Risposta: ");

    //ho già dichiarato char risposta
    scanf(" %c", &risposta);                                        //prende in input un carattere e lo assegna a risposta

    if(toupper(risposta) == 'A') {                                  //se la risposta è A (sia minuscolo che maiuscolo) esegue le istruzioni dentro if
        printf("Risposta esatta\n");                                //stampa Risposta esatta
        punti++;                                                    //incrementa punti
    } else {                                                        //altrimenti esegue le istruzioni dentro else
        printf("Errato\n");                                         //stampa Errato
    }

    //Punti della partita corrente
    printf("\n Punti: %d \n", punti);                               //stampa l'intero punti
    return punti;                                                   //restituisce punti ed esce dalla funzione
}

int main() {                    //funzione principale
    char selezione;             //richiama selezione
    int punteggio = 0;          //dichiara l'intero punteggio e lo inizializza a zero
    introduzione();             //richiama la funzione introduzione

    do{                                     //esegue delle istruzioni prima del while
        selezione = menu_principale();      //chiama la funzione menu_principale assegnando un valore a selezione
        switch (toupper(selezione)) {       //confronta selezione (sia minuscolo che maiuscolo) con i 2 casi A o B
            case 'A':                       //caso A
            punteggio += gioco();           //punteggio è uguale a se stesso sommato a quello che restituisce la funzione gioco (punti)
            printf("Il tuo punteggio totale è: %d\n", punteggio);       //stampa la variabile intera punteggio
            break;      //esce dallo switch
            case 'B':                       //caso B
            printf("Il tuo punteggio totale è: %d\n", punteggio);       //stampa la variabile intera punteggio
            printf("Arrivederci!\n");       //stampa Arrivederci
            break;      //esce dallo switch
            default:    //istruzione da eseguire nel caso non si presentasse nessuno dei due case
            printf("Riprova!\n");   //stampa Riprova
        }
    } while (toupper(selezione) != 'B');        //finchè selezione (sia minuscolo che maiuscolo) è diverso da B esegue l'istruzione

    return 0;       //restituisce zero e finisce l'esecuzione del programma
    
}
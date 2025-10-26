#include <stdio.h>                          //includo la libreria standard
#include <math.h>                           //includo la libreria matematica
#define M_PI 3.14159265358979323846         //definisco M_PI come pigreco

int main(){                                 //funzione principale

    int n;                                  //dichiaro le variabili, la prima è intera e rappresenta la quantità di numeri che inserirò
    float d;                                //variabile float per inserire i numeri
    float q, c, t;                          //variabili float per l'area di cerchio, quadrato e triangolo
    float m;                                //variabile float per la media aritmetica

    while (n<3)                             //ciclo while per avere un minimo di 3 numeri
    {
        printf("Su quanti numeri vuoi fare una media? \n");     //stampo la prima domanda a schermo
        scanf("%d", &n);                                        //prendo in input un valore interno e lo assegno alla variabile n
    }
    for (int i = 0; i < n; i++)             //ciclo for per ripetere le istruzioni di richiesta numero finchè i raggiunge il valore di n, i viene incrementato per ripetere tot volte
    {
        printf("Inserisci il %d° numero reale \n", i+1);        //stampo la richiesta numero a schermo, in cui verrà indicato l'ordinamento del numero
        scanf("%f", &d);                    //prendo in input il numero float e lo assegno a d
        m += d;                             //m sarà uguale al valore di se stesso sommato al valore di d
    }
    m /= n;                                 //m sarà uguale al valore di se stesso diviso il valore di n
    int mi = m;                             //dichiaro la variabile intera mi e le assegno il valore di m, solo la parte intera

    printf("La media in numero reale è: %.2f \n", m);       //stampo a schermo la media reale, prendendo il valore di m(float con i primi 2 decimali)
    printf("La media in numero intero è: %d \n", mi);       //stampo a schermo la media intera, prendendo il valore di mi
    printf("\n");   //spazio
    printf("Considerando il numero %.2f calcoliamo l'area delle figure: \n", m); //stampo a schermo una frase per iniziare la parte di calcolo area considerando m come lato/diametro
    printf("\n");   //spazio

    q = m*m;                                                            //formula per calcolare l'area del quadrato
    printf("L'area reale del quadrato è %.2f \n", q);                   //stampo a schermo l'area reale del quadrato, come float con solo 2 decimali
    int qi = q;                                                         //dichiaro qi, l'area del quadrato come variabile intera
    printf("L'area intera del quadrato è %d \n", qi);                   //stampo a schermo l'area intera del quadrato

    c = M_PI*(m*m)/4;                                                   //formula per calcolare l'area del cerchio, utilizzo M_PI definito come pigreco
    printf("L'area reale del cerchio è %.2f \n", c);                    //stampo a schermo l'area reale del cerchio, come float con solo 2 decimali
    int ci = c;                                                         //dichiaro ci, l'area del cerchio come variabile intera
    printf("L'area intera del cerchio è %d \n", ci);                    //stampo a schermo l'area intera del cerchio

    t = (sqrt(3)/4)*(m*m);                                              //formula per calcolare l'area del triangolo equilatero
    printf("L'area reale del triangolo equilatero è %.2f \n", t);       //stampo a schermo l'area reale del triangolo, come float con solo 2 decimali
    int ti = t;                                                         //dichiaro ti, l'area del triangolo come variabile intera
    printf("L'area intera del triangolo equilatero è %d \n", ti);       //stampo a schermo l'area intera del triangolo

    return 0;                                                           //se ritorna 0 il programma può uscire da main e concludersi
}
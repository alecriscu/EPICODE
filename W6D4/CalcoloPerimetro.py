def calcolo_perimetro():        #definisco la funzione calcolo_perimetro
    print("Calcolatore di perimetro")   #stampo la presentazione
    print("""
    - Quadrato --> 1
    - Rettangolo --> 2
    - Cerchio --> 3
    """)                                #stampo la scelta

    print("Scegli una figura geometrica")
    selected = int(input("-->"))        #input della scelta

    if selected == 1:                   #condizione per cui se la scelta è 1 scelgo il quadrato e ne calcolo il perimetro
        print("Hai scelto il quadrato")
        lato = float(input("Inserisci il lato: "))
        print("Il perimetro del quadrato avente lato", lato, "è :", lato*4)     #stampo il risultato del perimetro
    elif selected == 2:                 #condizione per cui se la scelta è 2 scelgo il rettangolo e ne calcolo il perimetro
        print("Hai scelto il rettangolo")
        base = float(input("Inserisci la base: "))
        altezza = float(input("Inserisci l'altezza: "))
        print("Il perimetro del rettangolo avente altezza", altezza,"e base",base, "è :", base*2+altezza*2)     #stampo il risultato del perimetro
    elif selected == 3:                 #condizione per cui se la scelta è 3 scelgo il cerchio e ne calcolo la circonferenza
        print("Hai scelto il cerchio")
        raggio = float(input("Inserisci il raggio: "))
        print("La circonferenza del cerchio avente raggio", raggio, "è :", 2*raggio*3.14)       #stampo il riultato della circonferenza
    else:       #qualsiasi altro input stamperà scelta non valida
        print("numero inserito non valido")

calcolo_perimetro()     #richiamo la funzione calcolo_perimetro
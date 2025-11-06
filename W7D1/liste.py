def conteggioLettere(lista_a):      #definisco la funzione conteggioLettere
    lista_b = []                  #creo una lista vuota che conterrà le lunghezze delle parole
    for parola in lista_a:         #condizione che esegue istruzione per ogni parola nella lista di input
        lista_b.append(len(parola)) #aggiungo alla lista_b la lunghezza di ogni parola tramite la funzione len()
    return lista_b      #restituisco la lista_b come output della funzione

input_user = input("Inserisci una lista di parole separate da spazi: ") #input per inserire una una stringa e salvarla nella variabile input_user
lista_a = input_user.split()    #divido la stringa di input in una lista di parole usando lo spazio come separatore e salvo il risultato in lista_a, ho usato il metodo split()
lista_b = conteggioLettere(lista_a) #richiamo la funzione conteggioLettere passando la lista di parole come argomento e salvo il risultato in lista_b
print("Lista delle parole:", lista_a)   #stampo la lista delle parole
print("Lista delle lunghezze delle parole:", lista_b)   #stampo la lista delle lunghezze delle parole
/*Scrivi un programma in C che permetta all'utente di indovinare un numero segreto. 
Il programma genererà un numero casuale compreso tra 1 e 10 e chiederà all'utente di inserire un numero. 
Il programma confronterà il numero inserito dall'utente con il numero segreto e terminerà quando l'utente indovina il numero corretto.

Hai a disposizione 40 minuti. Suggerimenti: potresti usare una variabile numeroSegreto che sfrutti rand() in modo da generare il tuo numero casuale!
Es.   numeroSegreto = rand() % (max - min + 1) + min;*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int numeroUtente;
    int tentativi;

    n=0;

    while (numeroUtente != numeroSegreto) {
    tentativi++;

    printf("\nTentativo %d: Inserisci un numero: ", tentativi);
    scanf("%d", &numeroUtente);

    // Validazione dell'input (controllo se il numero è all'interno dell'intervallo)
    if (numeroUtente < min || numeroUtente > max){
        printf("Il numero selezionato è corretto...il numero indovinato è %d", numeroUtente);
    } else {
        printf("Il numero selezionato, non è corretto...c'è bisogno di continuare con i tentativi...");
    }
        return 0;

    }
}
#include <stdio.h>
#include <stdlib.h>
#include "studenteStack.h"

const char fname[]="studenti.dat";

int main(int argc, char** argv) {
    FILE *inputFile;
    studente s;
    stackElement *stack=NULL; //studenteStack stack;
    int returnValue;
    
    // Apertura del file di lettura dati
    inputFile = fopen(fname, "rb");
    if(inputFile == NULL) {
        fprintf(stderr, "Impossibile aprire il file %s in lettura\n", fname);
        exit(-1);
    }
    
    // Aggiunta degli elementi alla pila
    while(fread(&s, sizeof(studente), 1, inputFile) == 1) {
        // s contiene i dati dello studente letto
        fread(&s, sizeof(studente), 1, inputFile);
        returnValue=push(&stack,s);
        // TODO Implementa il codice per la gestione della chiamata a push
    }
    fclose(inputFile);
    
    // Estrazione degli elementi dalla pila e stampa a schermo
    s = pop(&stack);
    while(s.cognome[0] != 0) {
        printf("%s; %s\n", s.cognome, s.nome);
        s = pop(&stack);
    }
    
    return (EXIT_SUCCESS);
}


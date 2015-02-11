#include <stdlib.h>
#include <string.h>
#include "studenteStack.h"

/*
 * Aggiunge un nuovo elemento alla pila.
 * Restituisce:
 *  0   in caso di successo;
 *  -1  in caso di errore;
 */
int push(studenteStack *stack, studente newStudente) { //modificato
    int r= -1;
    studenteStack * temp=NULL;
    *temp=(studenteStack)malloc(sizeof(stackElement));
    
    if(*temp!=NULL){
        strcpy(((*temp)->s).nome , newStudente.nome);
        strcpy(((*temp)->s).cognome , newStudente.cognome);
        (*temp)->next=*stack;
        *stack=*temp;
        r=0;
    }
    
    return r;
}

/*
 * Estrae un elemento dalla pila, rimuovendolo.
 * Restituisce l'elemento estratto.
 * Se la pila è vuota, l'elemento restituito ha nome e cognome di lunghezza 0.
 */
studente pop(studenteStack *stack) {
    studente r;
    
    // TODO Implementa il corpo della funzione
    
    return r;
}
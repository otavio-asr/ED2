#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct no{
    int key;
    Tno *left;
    Tno *right;
    Tno *p;
} Tno;

Tno* Tno_create(int key){
    Tno *novo = (Tno*) malloc(sizeof(Tno));
    if(novo != NULL){
        novo->key = key;
        novo->p = NULL;
        novo->left = NULL;
        novo->right = NULL;

    };

    return novo;
}



void arrayRec(int inicio, int fim, int vet[],int *novovetor,int qtd) {

    int vet2[qtd];

    for(int i=0 ;i < qtd;i++){
        
        vet2[i] = vet[i];

    }

    *novovetor = vet2;

}

Tno * arrayBst(int vet[],int qtd){
    int meio; 
    int fim;
    int inicio;
    Tno * parent;


    if (qtd%2 == 1)
    {
        meio = (qtd-1)/2;
        inicio = 0;
        fim = qtd-1;

        parent = Tno_create(vet[meio]);
        printf(" %d ",parent->key);

        
        if (qtd/2 != 1)
        {
            int vetoresquerdo[qtd/2];
            arrayRec(inicio, meio-1, vet,vetoresquerdo,qtd/2);
            int vetordireito[qtd/2];
            arrayRec(meio+1, fim, vet,vetordireito,qtd/2);

            parent->left = arrayBst(vetoresquerdo,qtd/2);
            parent->right = arrayBst(vetordireito,qtd/2);
            
        }
        


    }
    
    
    


    return parent;

}



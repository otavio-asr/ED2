#include "head.h"
#include <stdbool.h>
#include <stdio.h>

BimTree* BT_create(){
    BimTree *novo = (BimTree*) malloc (sizeof(BimTree));
    if(novo != NULL) {
        novo->root = NULL;
    };
    return novo;

};

bool BT_insert(BimTree* t,int key){
    Tno *novo = (Tno*) malloc(sizeof(Tno));
    if(novo != NULL){
        novo->key = key;
        novo->p = NULL;
        novo->left = NULL;
        novo->right = NULL;

    };
};

void BT_pre(Tno*);
void BT_in(Tno*);
void BT_pos(Tno*);
void BT_nivel(Tno*);

Tno* BT_search(Tno*, int);
Tno* BT_max(Tno*);
Tno* BT_min(Tno*);
Tno* BT_sucessor(Tno*);

bool Tree_Delete(T, u,v){


};

void Transplante(T, u ,v);
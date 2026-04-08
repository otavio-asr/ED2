#ifndef HEAD.H
#define HEAD.H
#include <stdbool.h>

typedef struct no{
    int key;
    Tno *left;
    Tno *right;
    Tno *p;
} Tno;

typedef struct bimtree{
    Tno* root;
} BimTree;

BimTree* BT_create();

bool BT_insert(BimTree*, int);

void BT_pre(Tno*);
void BT_in(Tno*);
void BT_pos(Tno*);
void BT_nivel(Tno*);

Tno* BT_search(Tno*, int);
Tno* BT_max(Tno*);
Tno* BT_min(Tno*);
Tno* BT_sucessor(Tno*);

bool Tree_Delete(T, u,v);
void Transplante(T, u, v);

#endif
#ifndef HEAD_H
#define HEAD_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// Estrutura do Nó com ponteiro para o pai [cite: 898-900]
typedef struct no {
    int key;
    struct no *left;
    struct no *right;
    struct no *p;
} Tno;

// Estrutura de controle da Árvore [cite: 1010-1011]
typedef struct bimtree {
    Tno* root;
} BimTree;

// --- CRIAÇÃO E INSERÇÃO ---
BimTree* BT_create();
bool BT_insert(BimTree* t, int key);

// --- PERCURSOS (VISITAÇÃO) ---
void BT_pre(Tno* root);    // Raiz, Esq, Dir [cite: 247-248]
void BT_in(Tno* root);     // Esq, Raiz, Dir [cite: 248-249]
void BT_pos(Tno* root);    // Esq, Dir, Raiz [cite: 250]
void BT_nivel(Tno* root);  // Nível por nível (usa Fila) [cite: 271-274]

// --- BUSCA E ESTATÍSTICAS ---
Tno* BT_search(Tno* x, int k); // Busca uma chave k [cite: 901-903]
Tno* BT_max(Tno* x);           // Nó com maior chave [cite: 946-948]
Tno* BT_min(Tno* x);           // Nó com menor chave [cite: 931-933]
Tno* BT_sucessor(Tno* x);      // Próximo nó na ordem simétrica [cite: 958-960]

// --- REMOÇÃO (O seu grande desafio!) ---
// Auxiliar: substitui a subárvore u pela v [cite: 1091]
void Transplante(BimTree* T, Tno* u, Tno* v); 

// Principal: remove o nó z da árvore [cite: 1115]
bool Tree_Delete(BimTree* T, Tno* z);

#endif
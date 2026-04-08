#include "head.h"

// Sua BT_create que já está certa vai aqui

bool BT_insert(BimTree* t, int key) {
    Tno *y = NULL;
    Tno *x = t->root;
    
    // 1. Aloque o novo nó 'z' aqui e verifique se o malloc funcionou
    // 2. Implemente o while para x descer e y acompanhar [cite: 1012-1020]
    
    // 3. Conecte o z->p = y 
    
    // 4. Se y for NULL, z vira root. 
    // Senão, decida se z é filho esquerdo ou direito de y [cite: 1026-1029]
    
    return true; 
}

void Transplante(BimTree* T, Tno* u, Tno* v) {
    // Implemente os 3 passos da cirurgia de enxerto que conversamos [cite: 1093-1101]
}

// Implemente BT_min aqui, você vai precisar dela para o Tree_Delete [cite: 1107-1111]

bool Tree_Delete(BimTree* T, Tno* z) {
    if (z == NULL) return false;

    // Caso 1: Sem filho esquerdo [cite: 1116-1118]
    // Caso 2: Sem filho direito [cite: 1119-1122]
    // Caso 3: Dois filhos (use o sucessor com BT_min) [cite: 1120-1137]
    
    return true;
}
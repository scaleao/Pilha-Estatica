#include "pilhaEstatica.h"

void inicializar(PILHA *p){
    p->topo = -1;
}

void empilhar(PILHA *p, REGISTRO reg){//tem a mesma funcao do inserir em uma estrutura de lista
    if(p->topo==MAX-1){
        printf("\nNAO DEU CERTO A PILHA ESTA VAZIA");
        return;
    }

    p->topo = p->topo+1;
    p->A[p->topo] = reg;
}

void imprimirUltimo(PILHA *p){
    int i;
    for(i = p->topo; i>=0; i--){
        printf("\n[%d*] = %d", i, p->A[i].chave);
    }
}

void imprimirComeco(PILHA *p){
    int i;
    for(i = 0; i<=p->topo; i++){
        printf("\n[%d*] = %d", i, p->A[i].chave);
    }
}

void desempilhar(PILHA *p){//tem o mesmo funcao do excluir em uma estrutura de lista
    if(p->topo>0){
        printf("\nPILHA ESTA VAZIA");
        return;
    }

    p->topo = p->topo-1;
}

void reinicializar(PILHA *p){
    p->topo = -1;
}

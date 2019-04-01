#ifndef PILHAESTATICA_H_INCLUDED
#define PILHAESTATICA_H_INCLUDED
#define MAX 50

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
    //mais elementos
}REGISTRO;

typedef struct{
    REGISTRO A[MAX];
    int topo;
}PILHA;

void inicializar(PILHA *p);
void empilhar(PILHA *p, REGISTRO reg);
void imprimirUltimo(PILHA *p);
void imprimirComeco(PILHA *p);
void desempilhar(PILHA *p);
void reinicializar(PILHA *p);
#endif // PILHAESTATICA_H_INCLUDED

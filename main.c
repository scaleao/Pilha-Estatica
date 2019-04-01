#include <stdio.h>
#include <stdlib.h>
#include "pilhaEstatica.h"

int main()
{
    PILHA pilha;
    REGISTRO reg;

    inicializar(&pilha);

    reg.chave = 10;
    empilhar(&pilha, reg);

    reg.chave = 20;
    empilhar(&pilha, reg);

    reg.chave = 30;
    empilhar(&pilha, reg);

    reg.chave = 40;
    empilhar(&pilha, reg);

    reg.chave = 50;
    empilhar(&pilha, reg);

    imprimirUltimo(&pilha);

    imprimirComeco(&pilha);

    return 0;
}

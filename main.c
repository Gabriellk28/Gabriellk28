#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

int main(void)
{
    int n;
    Lista *l;
    l = lst_cria();
    l = lst_insere(l, 1);
    l = lst_insere(l, 2);
    l = lst_insere(l, 3);
    l = lst_insere(l, 4);
    l = lst_insere(l, 5);
    lst_imprime(l);
    ultimo(l);
    lst_libera(l);
    return 0;
}
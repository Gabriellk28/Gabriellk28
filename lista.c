#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

struct lista
{
    int info;
    struct lista *prox;
};

Lista* lst_cria(void)
{
    return NULL;
}

Lista* lst_insere(Lista *l, int i)
{
    Lista *novo;
    novo=(Lista*) malloc(sizeof(Lista));
    novo->info=i;
    novo->prox=l;
    return novo;
}

void lst_imprime(Lista *l)
{
    Lista *p;
    for(p = l; p != NULL; p = p->prox)
        printf("Info = %d\n", p->info);
}

int lst_vazia(Lista *l)
{
    if(l == NULL)
        return 1;
    else
        return 0;
}

Lista* lst_busca_sequencial(Lista *l, int v)
{
    Lista *p;
    for(p = l; p != NULL; p = p->prox){
        if(p->info == v)
            return p;
    }
    return NULL;
}

Lista* lst_retira(Lista *l, int v)
{
    Lista *ant = NULL;
    Lista *p = l;

    //Procura elemento na lista guardando anterior
    while(p != NULL && p->info != v)
    {
        ant = p;
        p = p->prox;
    }

    //Verifica se achou elemento
    if(p == NULL){
        exit(1);
    }
    
    //Retira elemento
    if(ant == NULL){
        l = p->prox;
    }
    else{
        ant->prox = p->prox;
    }
    free(p);
    exit(1);
}

//Função para liberar a lista:
void lst_libera(Lista *l)
{
    Lista *p =l;
    while(p != NULL){
        Lista *t = p->prox;
        free(p);
        p = t;
    }
}

//Função que retonar os nós com o campo info com valores maiores que n:
int maiores(Lista *l, int n)
{
    int quant;
    Lista *p;
    for(p = l; p != NULL; p = p->prox){
        if(p->info > n)
            quant++;
    }
    return quant;
}

//Função que retorna um ponteiro para o último de nó de uma lista:
Lista *ultimo(Lista *l)
{
    Lista *ant = NULL;
    Lista *p;
    
    }
}
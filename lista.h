//Struct Lista
typedef struct lista Lista;

//Função de criação
Lista *lst_cria(void);

//Função de inserção
Lista *lst_insere(Lista *l, int i);

//Função que percorre e imprime os elementos da lista
void lst_imprime(Lista *l);

//Função que verifica se a lista está vazia:
int lst_vazia(Lista *l);

//Função de busca sequencial
Lista *lst_busca_sequencial(Lista *l, int v);

//Função que retira um elemento da lista
Lista *lst_retira(Lista *l, int v);

//Função para liberar a lista
void lst_libera(Lista *l);

//
int maiores(Lista *l, int n);

//
Lista *ultimo(Lista *l);
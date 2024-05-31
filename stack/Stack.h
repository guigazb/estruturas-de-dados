 /*-----------------------------------------------------------------------
Stack.h
arquivo com as especificações para o TAD pilha em ED 1 
professor: Anselmo Cardoso de Paiva
-------------------------------------------------------------------------
Aluno: Guilherme Barrio Nascimento
Abril/2024
------------------------------------------------------------------------*/
#ifndef Stack_h
#define Stack_h

// definições locais
typedef struct stack Stack;

//especificações para o tad pilha

Stack *stkCreate ( int max); 
/* Construir uma nova pilha
Pre-condição: (max_itens > 0)
Pos-condição: retorna um ponteiro para uma pilha vazia */

int stkPush( Stack *pilha, void *elm); 
/* Inserir o elemento do topo da pilha
Pre-condição: (s foi criada por stkCreate) && (cabe  um elemento na pilha) && (item != NULL) 
Pos-condição: item foi adicionado ao topo da pilha s */

void *stkPop( Stack *pilha); 
/* Retira o elemento no topo da pilha
Pre-condição: (s foi criada por stkCreate) && (existe pelo menos um item na pilha)
Pos-condição: elemento do topo da pilha foi removido */

void *stkTop( Stack *pilha);
/* retorna o atual elemento no topo da pilha
Pre-condição: (s foi criada por stkCreate) && (existe pelo menos um item na pilha)
Pos-condição: o retorno é o item no topo da pilha */

int stkIsEmpty( Stack *pilha);
/* retorna se o numero de elementos é zero
Pre-condição: (s foi criada por stkCreate)
Pos-condição: retorna true se a pilha estiver vazia, false se conter algum elemento */

int stkDestroy (Stack *pilha);
/* destroi a piha
Pre-condição: (s foi criada por stkCreate) && (não existem itens na pilha)
Pos-condição: a pilha foi destruida */


//questão 3 da lista

void* stkMultipop(Stack* pilha,int k);
/* tira k elementos da pilha e/ou esvazia 
Pre-condição: (s foi criada por stkCreate) && (existem itens na pilha)
Pos-condição: a pilha foi subtraída k itens do topo ou esvaziada por completo */

// prova 2023.2 - questão 4
int removemaioresquekey(Stack* pilha,void* key,int(*cmp)(void*,void*));
/* remove os itens em sequencia no acesso da pilha até achar um menor que a chave
Pre-condição: (pilha foi criada por stkCreate) && (existem itens na pilha) && (não pode usar stkPush nem stkPop)
Pos-condição: os itens maiores ou iguais a key foram removidos */

//prova 2023.1 questão 3
int Promove(Stack* pilha, int n);

//prova 2021.2 questao 2
int Pune(Stack* pilha, int n);

#endif /* __STACK_H */
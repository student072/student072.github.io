#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct No{
    int num;
    struct No *prox;
    struct No *ant;
};
typedef struct No No;
 No *inicio = NULL;
 No *fim = NULL;
 No *aux ;
 No *aux2;

void insere_lista(){
    No *novo =(No*) malloc(sizeof(No));
    scanf("%d",&novo->num);
    if(inicio == NULL){
        novo->prox = NULL;
        novo->ant = NULL;
        inicio = novo;
        fim = novo;
    }else{
        aux = inicio;
        while(aux!=NULL && novo->num > aux->num){
            aux = aux->prox;
        }
        if(aux == inicio){
            novo->prox = inicio;
            novo->ant = NULL;
            inicio->ant = novo;
            inicio = novo;
        }else if(aux == NULL){
            fim->prox = novo;
            novo->ant = fim;
            fim = novo;
            fim->prox = NULL;
        }else{
            novo->prox = aux;
            aux->ant->prox = novo;
            novo->ant = aux->ant;
            aux->ant = novo;
        }
    }
    printf("\nNumero inserido na lista!");
}

void consulta_lista(){
    if(inicio == NULL){
        printf("\nLista Vazia!!");
    }else{
        aux = inicio;
        while(aux != NULL){
            printf(" %d ", aux->num);
            aux = aux->prox;
        }
    }
}
void remover_elemento(){
    int numero;
    int achou;
    if(inicio == NULL){
        printf("\nLista Vazia!!");
    }else{
        printf("Digite o elemento a ser removido: ");
        scanf("%d", &numero);
        aux = inicio;
        achou = 0;
        while(aux != NULL){
                if(aux->num == numero){
                    achou = achou + 1;
                    if(aux == inicio){
                        inicio = aux ->prox;

                        if (inicio != NULL){
                            inicio->ant = NULL;
                        }
                        free(aux);
                        aux = inicio;
                    }else if(aux == fim){
                        fim = fim->ant;
                        fim->prox = NULL;
                        free(aux);
                        aux = NULL;
                    }else{
                        aux->ant->prox = aux->prox;
                        aux->prox->ant = aux->ant;
                        aux2 = aux->prox;
                        free(aux);
                        aux = aux2;
                    }
                }else{
                    aux = aux -> prox;
                }
        }
                if(achou == 0){
                    printf("Numero nao encontrado!");
                }else{
                    printf("Numero removido %d vez(es)",achou);
                }

    }
}
void esvaziar_lista(){
    if(inicio == NULL){
        printf("\nLista Vazia!!");
    }else{
        aux = inicio;
        while(aux != NULL){
                inicio = inicio->prox;
                free(aux);
                aux = inicio;
        }
        printf("\nLista Esvaziada!!");
    }
    getch();
}

int main(){
    int op;
    while(1){
        printf("\nEscolha a opcao desejada: ");
        printf("\n1- Inserir numero na fila: ");
        printf("\n2- Imprimir lista");
        printf("\n3- Remover elemento: ");
        printf("\n4- Esvaziar lista: \n");
        scanf("%d",&op);
        switch(op){
        case 1:
            insere_lista();
            break;
        case 2:
            consulta_lista();
            break;
        case 3:
            remover_elemento();
            break;
        case 4:
            esvaziar_lista()
;            break;
        default:
            exit(1);
        }
    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct No{
    int num;
    struct No *prox;
};
/*para toda hora n�o precisar escrever "struct No" vamos definir
		   o tipo No atrav�s de typedef para simplificar*/
		typedef struct No No;
		/*toda lista tem um inicio e fim, para isso declaramos dois ponteiros do tipo No para apontar para os
		   os n�s que estr�o no ini�cio e fim da lista respectivamente.
		   Como a lista est� inicialmente vazia, inicio e fim apontam para NULL */
		No *inicio = NULL;
		No *fim = NULL;
		/*necessitaremos tamb�m de dois ponteiros auxilares *aux e *ant */
		No *aux;
		No *anterior;
void insere_inicio_lista(){
			/*a cada inser��o alocamos dinamicamente um espa�o para um novo n�*/
			No *novo =(No*) malloc(sizeof(No));
			/*o n�mero a ser inserido ser� armazenado em novo->num*/
			printf("Digite o numero a ser inserido no inicio da lista: ");
			scanf("%d",&novo->num);
			/*caso a lista estiver vazia o primeiro elemento a ser inserido ser� o primeiro e �ltimo*/
			if(inicio == NULL){
				/*aqui fazemos com que inicio aponte para o mesmo endere�o que novo aponta*/
				inicio = novo;
				/*aqui fazemos com que fim aponte para o mesmo endere�o que novo aponta*/
				fim = novo;
				/*aqui fazemos com que o endere�o para o qual fim aponta, no atributo prox receba NULL*/
				fim->prox = NULL;
			/*caso a lista n�o esteja vazia*/
			}else{
				/*como a inser��o � no inicio, o novo n� inserido receber� no atributo prox o endere�o que inicio aponta, ou seja,
				    o inicio anterior ser� agora o segundo elemento, portante o primeiro elemento da lista ter� que apontar para ele*/
				novo->prox = inicio;
				/*aqui fazemos com que inicio aponte para o mesmo endere�o do novo n� inserido*/
				inicio = novo;
			}
			printf("\nNumero inserido no inicio da lista!");
		}
void insere_fim_lista(){
			/*a cada inser��o alocamos dinamicamente um espa�o para um novo n�*/
			No *novo =(No*) malloc(sizeof(No));
			/*o n�mero a ser inserido ser� armazenado em novo->num*/
			printf("Digite o numero a ser inserido no fim da lista: ");
			scanf("%d",&novo->num);
			/*caso a lista estiver vazia o primeiro elemento a ser inserido ser� o primeiro e �ltimo*/
			if(inicio == NULL){
				/*aqui fazemos com que inicio aponte para o mesmo endere�o que novo aponta*/
				inicio = novo;
				/*aqui fazemos com que fim aponte para o mesmo endere�o que novo aponta*/
				fim = novo;
				/*aqui fazemos com que o endere�o para o qual fim aponta, no atributo prox receba NULL*/
				fim->prox = NULL;
			/*caso a lista n�o esteja vazia*/
			}else{
				/*como a inser��o � no fim, o n� para o qual fim aponta, no atributo prox, receber� o endere�o de novo, ou seja,
					o �ltimo elemento ser� agora o pen�ltimo, e portanto dever� apontar para o �ltimo elemento inseirido*/
				fim->prox = novo;
				/*aqui fazemos com que fim aponte para o mesmo do novo n� inserido*/
				fim = novo;
				/*aqui fazemos com que o endere�o para o qual fim aponta, no atributo prox receba NULL*/
				fim->prox = NULL;
			}
			printf("\nNumero inserido no fim da lista!");
		}
void imprime_lista(){
			/*caso a lista esteja vazia*/
			if(inicio == NULL){
				printf("\nLista Vazia!!");
			/*caso a lista n�o esteja vazia*/
			}else{
				/*utilizando o ponteiro aux,  fazemos com ele aponte para o mesmo endere�o que inicio aponta*/
				aux = inicio;
				do{
					/*impress�o do elemento que aux aponta*/
					printf(" %d ", aux->num);
					/*aux aponta para o pr�ximo elemento da lista, que ser� o endere�o contido no ponteiro prox.*/
					aux = aux->prox;
				/*essa opera��o ser� feita at� aux ser diferente de NULL, ou seja, n�o houverem mais elementos a serem impressos*/
				}while(aux != NULL);
			}
}
void remover_elemento(){
			int numero;
			/*a vari�vel achou ser� utilizada como um contador de n�meros removidos*/
			int achou;
			/*caso a lista esteja vazia*/
			if(inicio == NULL){
				printf("\nLista Vazia!!");
			/*caso a lista n�o esteja vazia*/
			}else{
				printf("Digite o elemento a ser removido: ");
				scanf("%d", &numero);
				/*utilizando o ponteiro aux,  fazemos com ele aponte para o mesmo endere�o que inicio aponta*/
				aux = inicio;
				/*utilizando o ponteiro ele,  fazemos com ele aponte para NULL*/
				anterior = NULL;
				achou = 0;
			  do{
				  /*caso aux-> num seja igual ao n�mero a ser removido*/
				  if(aux->num == numero){
					  /*incrementamos achou*/
					  achou = achou + 1;
					  /*se o elemento a ser removido for o primeiro da lista*/
					  if(aux == inicio){
						  /*inicio apontar� para o segundo elemento da lista ou para NULL
						      caso o elemento removido seja o �nico elemento da lista*/
						  inicio = aux ->prox;
						  /*desalocamos o espa�o para onde aux apontava*/
						  free(aux);
						   /*aux aponta para o inicio da lista*/
						  aux = inicio;
					  /*se o elemento a ser removido for o �ltimo da lista*/
					  }else if (aux == fim){
						  /*o elemento anterior a fim, no atributo prox apontar� para NULL*/
						  anterior->prox = NULL;
						  /*fim aponta para o elemento apontado por anterior*/
						  fim = anterior;
						  /*desalocamos o espa�o para onde aux apontava*/
						  free(aux);
						  /*como era o �ltmo elemento da lista, aux recebe NULL*/
						  aux = NULL;
					   /*se o elemento a ser removido n�o for nem o primeiro nem o �ltimo da lista */
					  }else{
						  /*o elemento anterior ao elemento a ser removido, no atributo prox apontar� para o elemento
						  para qual aux->prox apontava*/
						  anterior->prox = aux->prox;
						    /*desalocamos o espa�o para onde aux apontava*/
						  free(aux);
						  /*aux aponta para o pr�ximo elemento da lista, aquele que era o seguinte ao n�mero removido*/
						  aux = anterior -> prox;
					  }
				/*caso aux-> num n�o seja igual ao n�mero a ser removido*/
				 }else{
					 anterior = aux;
					 aux = aux -> prox;
				 }
			/*essa opera��o ser� feita at� aux ser diferente de NULL, ou seja, n�o houverem mais elementos a serem pesquisados*/
			}while(aux != NULL);
			/*impress�o do resultado*/
			if(achou == 0){
					printf("Numero nao encontrado!");
					}else{
						printf("Numero removido %d vez(es)",achou);
					}
			}
		}
void esvaziar_lista(){
			/*caso a lista esteja vazia*/
			if(inicio == NULL){
				printf("\nLista Vazia!!");
			/*caso a lista n�o esteja vazia*/
			}else{
				/*utilizando o ponteiro aux,  fazemos com ele aponte para o mesmo endere�o de inicio  aponta*/
				aux = inicio;
				do{
					/*inicio apontar� para o pr�ximo elemento da lista*/
					inicio = inicio->prox;
					 /*desalocamos o espa�o para onde aux apontava*/
					free(aux);
					/*aux apontar� para o mesmo endere�o que inicio aponta*/
					aux = inicio;
				/*essa opera��o ser� feita at� aux ser diferente de NULL, ou seja, n�o houverem mais elementos a serem removidos*/
				}while(aux != NULL);
				printf("\nLista Esvaziada!!");
			}
			getch();
		}

int main(){
    int op;
    while(1){
        printf("\nEscolha a opcao desejada: ");
        printf("\n1- Inserir numero no inicio da fila: ");
        printf("\n2- Inserir numero no fim da fila: ");
        printf("\n3- Imprimir lista");
        printf("\n4- Remover elemento: ");
        printf("\n5- Esvaziar lista: \n");
        scanf("%d",&op);
        switch(op){
        case 1:
            insere_inicio_lista();
            break;
        case 2:
            insere_fim_lista();
            break;
        case 3:
            imprime_lista();
            break;
        case 4:
            remover_elemento();
            break;
        case 5:
            esvaziar_lista()
;            break;
        default:
            exit(1);
        }
    }
    return 0;
}

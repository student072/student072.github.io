
		int *nome;
		float *Media;
		char *sexo;
		struct aluno *faculdade;
		
		
		
		int nome;
		int *ptr_nome;
		
		int count=10;
		int *pt;
		pt= &count;
		
		
		
		int *p1, *p2;
		
		
		p1 > p2;
		p1 < p2;
		p1 >= p2;
		p1 <= p2;
		p1 == p2;
		p1 != p2;
	
	
		int vet[3] = {19, 27, 74};
		int *ptr;
		
		#include <stdio.h>
		int main (){
			float matriz [50][50];
			int i,j;
			for (i=0;i<50;i++)
				for (j=0;j<50;j++)
					matriz[i][j]=0.0;
			return(0);
		}
		
		
		
		#include <stdio.h>
		int main (){
			float matriz [50][50];
			float *p;
			int count;
			p=matriz[0];
			for (count=0;count<2500;count++){
				*p=0.0;
				p++;
			}
			return(0);
		}
		
		
		ptr = &vet;
		
		
		
		ptr = &vet[0];
		
		#include <stdio.h>
		
		struct telefone{
			char nome[15];
			char ddd[2];
			char num[10];
		};
		struct telefone *ptr; // declaração de ponteiro para a estrutura
		
		int main(){
			struct telefone pedro = {"Pedro da Silva", "99", "123-456"};//inicialização da estrutura declarada
			ptr = &pedro; // inicialização do ponteiro ptr  
			printf( "%s", ptr->nome ); //impressão do primeiro atributo da estrutura pedro através do ponteiro
			return 0;
		}
		
		
		ptr->nome;
		
		
		
		
		
		
		
		
		ptr++;
		
		
		int idade, *ptr_idade;
		idade = 30; // inicializamos a variável idade
		ptr_idade = &idade; // ptr_idade recebe o endereço de memória de idade
		*ptr_idade = 28; /* alteramos o conteúdo para onde ptr_idade aponta, ou seja,
								o conteúdo de idade agora é 28*/
								
								
							#include <stdio.h>
							int main(){
								int x;
								int *ptr;
								x = 5;
								ptr = &x;
								printf("O valor da variável X eh: %d\n", *ptr);  // O valor da variável X eh: 5
								*ptr = 10;
								printf("Agora, X vale: %d\n", *ptr); // Agora, X vale: 10
								return 0;
							}
							
							
							#include <stdio.h>
							int main(){
							  int x;
							  int *ptr;
							  ptr = &x;
							  printf("O endereço de X eh: %p ", ptr);
							  return 0;
							}
							
							
							#include <stdio.h>
							 
							 int main(){
								int a = 5, b = 10, temp;
								printf ("%d %d\n", a, b);
								
								temp = a;
								a = b;
								b = temp;
								
								printf ("%d %d\n", a, b);
								return 0;
							 }
							
							 #include <stdio.h>
 
							 void swap(int i, int j){
								int temp;
								temp = i;
								i = j;
								j = temp;
							 }
							 
							 int main(){
								int a, b;
								a = 5;
								b = 10;
								printf ("%d %d\n", a, b);
								swap (a, b);
								printf ("%d %d\n", a, b);
								return 0;
							 }
		
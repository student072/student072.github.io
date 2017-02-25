	
	#include <stdio.h>
	int main(){
		int i;
		// Imprime linha com 3 +.
		for (i=0; i < 3; i++)
			printf(“+”);
		printf(“\n”);
		// Imprime linha com 5 +.
		for (i=0; i < 5; i++)
			printf(“+”);
		printf (“\n”);
		// Imprime linha com 7 =.
		for (i=0; i < 7; i++)
			printf(“=”);
		printf (“\n”);
		// Imprime linha com 5 +.
		for (i=0; i < 5; i++)
			printf(“+”);
		printf (“\n”);
		// Imprime linha com 3 +.
		for (i=0; i < 3; i++)
			printf(“+”);
		printf(“\n”);
		return 0;
	}
	
	
	
	
	#include <stdio.h>
	void imprimeLinha_3 (){ 
		int i;
		for(i=0;i < 3; i++) 
			printf(“+”);
		printf (“\n”);
	}
	void imprimeLinha_5(){ 
		int i;
		for(i=0; i < 5; i++) 
			printf(“+”);
		printf (“\n”);
	}
	void imprimeLinha_7(){ 
		int i;
		for(i=0; i < 7; i++) 
			printf(“=”);
		printf (“\n”);
	}
	int main(){
		imprimeLinha_3();
		imprimeLinha_5();
		imprimeLinha_7();
		imprimeLinha_5();
		imprimeLinha_3();
		return 0;
	}

	
	
	#include <stdio.h>
	void imprimeCh(char ch, int n){
		int i;
		for(i=0;i < n; i++)
			printf(“%c”,ch);
		printf(“\n”);
	}
	int main(){
		imprimeCh(‘+’,3);
		imprimeCh(‘+’,5);
		imprimeCh(‘=’,7);
		imprimeCh(‘+’,5);
		imprimeCh(‘+’,3);
		return 0;
	}
	
	
	#include <stdlib.h>
	#include <stdio.h>
	int verifPar(int k){ 
		if (k%2 == 0) 
			return 1;
		else 
			return 0;
	}
	int main(){ 
		int num, resultado;
		printf("Digite um numero ");
		scanf("%d",&num);
		resultado = verifPar(num);
		if(resultado == 1)
			printf("\nO numero que voce digitou eh par\n");
		else
			printf("\nO numero que voce digitou nao eh par\n");
		return 0;
	}
	
	#include <stdio.h>
	//Função mudaA.
	void mudaA(){
		int a;
		a = 4;
		printf(“MudaA, a = %d \n”,a);
	}
	//Função Principal.
	int main(){ 
		int a;
		a = 2;
		printf(“main, a = %d \n”,a);
		mudaA();
		printf(“main, a = %d \n”,a);
		return 0;
	}

	#include <stdio.h>
	int a;
	//Função mudaA.
	void mudaA(){
		a = 4;
		printf(“MudaA, a = %d \n”,a);
	}
	//Função Principal.
	int main(){ 
		a = 2;
		printf(“main, a = %d \n”,a);
		mudaA();
		printf(“main, a = %d \n”,a);
	}
	
	#include <stdio.h>
	//Função mudaA().
	int mudaA(int b){ 
		b = b*b;
		printf(“MudaA, a = %d \n”,b);
		return b;
	}
	//Função Principal.
	int main(){ 
		int a;
		a = 2;
		printf(“main, a = %d \n”,a);
		a = mudaA(a);
		printf(“main, a = %d \n” ,a);
		return 0;
	}
	
	void imprimeCh(char ch, int n)
	
	
	imprimeCh(‘+’,3);
	
	
	#include <stdlib.h>
	// Função que devolve a soma de dois inteiros
	int soma (int a, int b){
		return a+b ;
	}
	// Função que devolve o dobro de qualquer inteiro
	int dobro (int x){
		return 2*x ;
	}
	// Função principal chama as demais.
	int main(){
	int n, i, total;
		printf(“Entre com dois numeros”);
		scanf(“%d %d”,&n,&i);
		total = soma(n,i);
		printf(“%d + %d = %d\n”,n,i,total);
		printf(“ 2 * %d = %d e 2 * %d = %d\n”,n,dobro(n), i, dobro(i));
		return 0;
	}
	
	
	
	
	
		char nome_da_string[tamanho];

		
		char linguagem[12];
		
		
		char linguagem [] “Linguagem C”;
		
		
		char linguagem[200] = “Linguagem C”;
		
	
		scanf(“%s”, nome_da_string);
		
		
		scanf ( "%[^\n]", str);
		
		
		gets( nome_da_string );
		
		
		printf("Minha string: %s", str);
		
		
		puts( nome_da_string_a_ser_exibida);
		
		
		char nome[15] = "Maria da Silva";
		int s = strlen (nome);
		// s conterá o valor 14
		
		
		char nome[]  = "Clarice Lispector";
		char nome2[] = "Oswald de Andrade";
		
		strcpy (nome, nome2);
		// agora nome conterá "Oswald de Andrade"
		
		
		
		char msg[] = "Bom dia!";
		char nome[] = "Maria da Silva";
		strncpy (msg, nome, strlen(msg));
		// agora msg conterá "Maria da"
		
		char nome[20];
		printf("Entre com seu nome: ");
		scanf("%[^\n]", nome); //digitado:  Joao da Silva
		// nome recebe Joao da Silva
		
		int vetor[10];
		// inicializar todos os elementos com valor 0
		vetor = 0; // ERRADO!
		
		
		
		int vetor[10];
		int indice;
		// inicializar todos os elementos com o valor 0
		for (indice = 0; indice < 10; indice++) {
		 vetor[indice] = 0;
		} 
		
	
		int vetorA[10], vetorB[10]; 
		// copiar o conteúdo do vetor B para o vetor A
		vetorA = vetorB; // ERRADO! 
		
		
		int vetorA[10], vetorB[10];
		int indice;
		// copiar o conteúdo do vetor B para o vetor A
		for (indice = 0; indice < 10; indice++) {
		 vetorA[indice] = vetorB[indice];
		} 
		
		tipo_de_retorno nome_da_função(parâmetros de entrada){
			declarações;
			comandos;
		}
		
		
		int exemplo(tipo1 nome1,  tipo2 nome2, tipo1 nome3)
		
		int exemplo(int idade, char sexo, int x, float y)
		
		
		int tres(){
			return 3;  // poderia também ser return (3);
		}
		
		
		int funcao (int a, int b)
		float funcao (float preco, int quantidade)
		double funcao (double angulo)
		
		
		void funcao (void)
		void funcao ()
		
		
		int x = quadrado (11);
		
		x = 1;
		y = 5;
		
		do{
			x = x+2;
			y = y+1;
		}while(x<=y);
		
		
		x <-- 1;
		y <-- 5;
		REPITA
			x<-- x+2;
			y <--y+1;
		ATÉ x<=y
		
		
				x = x + 3;
				x+= 3;
				
				k = k - 2;
				k-= 2;
				
				y =  y * 10;
				y *= 10;
				
				
		var1_registro = var2_registro;
		
		
		
			
		
		


		
		
		
		
	
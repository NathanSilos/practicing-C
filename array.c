// Faça um programa que receba 30 valores em um vetor de inteiros,
// mas somente valores múltiplos de 4 e 6.
// O programa deve solicitar um novo valor, 
// caso a condição não seja satisfeita. Ao final, mostrar os elementos do vetor na tela

# include <stdio.h>
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
    
    /* Inicializando variaveis */ 
    int i ;
    int v[30];

    /* Loop onde perguntara os numeros para o usuario */ 
    for(i=0; i < 30;i++){   
        printf("Digite um número: ");
        
        scanf("%d", &v[i]);
        
        /* Verifica se o numero é multiplo de 4 e 6*/ 
        while(v[i]%4 != 0 && v[i]%6 != 0){
            printf("Digite novamente um número: ");
            scanf("%d", &v[i]);
        }
    }
    
    /* Printa todos os números da lista*/
    for(i = 0; i < 30; i++){
 		printf("%d ", v[i]);
	 }

    getch();
    return 0;
}

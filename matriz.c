// Faça um programa em C que receba um número inteiro (X)
// entre 1 e 10. A partir do número digitado, atribua a
// uma matriz 3x5 das seeguintes caracteristicas

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/* Declara valor ao usuario */
	int valor;
	
	printf("Informe um numero de 0 a 10: ");
	scanf("%d",&valor);
	
	/* Repete o input ate o usuario colocar ao entre 1 e 10 */
	while (valor < 1 || valor > 10 ) {
	    printf("Informe um numero de 0 a 10: ");
	    scanf("%d",&valor);
	}
	
	/* Variaveis que utilizei para calcular as matrizes */
	int i, j;
	int expoente;
	float m[3][5];

	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
		    
		    /* Primeiro valor da matriz deve ser o input */
		    if (i == 0 && j == 0) {
		        m[i][j]= valor;
		        printf("%.1f\t", m[i][j]);
		        
		    } else {
		      if (i == 0) { 
		          /* Somar mais 10 no numero anterior (primeira linha) */
		          m[i][j] = m[i][j-1] + 10;
		          printf("%.1f\t", m[i][j]); 
		          
		      } else if (i == 1) {
		          /* Dividir por 9 o valor acima (segunda linha) */
		          m[i][j] =  m[i-1][j] / 9;
		          printf("%.1f\t", m[i][j]);
		      }
		      else if (i == 2 ){
		          /* Expoenciar o valor acima por J (segunda linha) */
		          /* Obs.: Pelos testes que fiz a função pow() estava 
		          arredondando os valores, caso veja alguam divergencia */
		          expoente = j + 1;
		          m[i][j] = pow(m[i-1][j], expoente);
		          printf("%.2f\t", m[i][j]);
		      }
		    }
		}
		/* Printa a proxima linha */
		printf("\n");
	}
	getch();
	return 0;
}
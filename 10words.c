//Escreva um programa em C para ler 10 palavras de no máximo 15 caracteres 
//cada uma e apresente-as na tela na seguinte ordem:
// 1ª, 10ª, 2ª, 9ª, 3ª, 8ª, 4ª, 7ª, 5ª, 6ª.

# include <stdio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	// vetor com as palavras
	char palavra[10][15];  
  
	// variavel que vai ajudar a printar na ordem
	int aux = 9;
	int i;

	// Avise o usuario sobre o tamanho da palavra
	printf("\nAs palavras devem conter até 15 caracteres.\n\n");

  // Loop para pegar as palavras
	for(i=0;i<10;i++){
		printf("Digite a palavra: ");
		gets(palavra[i]);

		// Caso a palavra seja maior que 15 caracteres
		// Pede novamente
		while (strlen(palavra[i]) > 15){
			printf("Digite novamente a palavra: ");
			gets(palavra[i]);
		}
	}
	
	printf("\nNomes na ordem inversa de digitação:\n");

	// Printa os valores
	for(i=0;i<5;i++){
		printf("%d°: %s\n", i+1, palavra[i]);
		printf("%d°: %s\n", aux+1, palavra[aux]);
		// Auxiliar serve para printar os ultimos casos
		// Retira um para poder seguir a ordem desejada
		aux -=1;
	}
	return 0;
}

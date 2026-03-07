#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	char nome[40];
	char curso[30];
	int idade;
	

	printf("Digite seu nome completo: ");
	fgets(nome, 40, stdin);

	nome[strcspn(nome, "\n")] = 0;

	printf("Digite sua idade: ");
	scanf("%d", &idade);
	while(getchar() != '\n');

	printf("Digite o a graduação que faz atualmente: ");
	fgets(curso, 30, stdin);

	curso[strcspn(curso, "\n")] = 0;

	printf("Seu nome é: %s.\n", nome);
	printf("Sua idade é: %d.\n", idade);
	printf("Seu curso de graduação é: %s.", curso);
	
	return 0;
}

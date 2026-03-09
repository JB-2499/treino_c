#include <stdio.h>
#include <stdbool.h>

int main() {
	int idade;
	int maioridade = 18;

	printf("Digite sua idade: ");
	scanf("%d", &idade);

	printf("%d", idade >= maioridade);
	
	return 0;
}

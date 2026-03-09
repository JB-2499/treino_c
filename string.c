#include <stdio.h>
#include <string.h>

int main(void) {
	char nome[20];
	char limite[sizeof(nome)] = "";

	for (int i = 0; i < sizeof(nome); i++) {
		strcat(limite, "_");
	}

	printf("Limite de tamanho: %s\n", limite);
	printf("Digite o seu nome: ");

	fgets(nome, sizeof(nome), stdin);

	printf("\n%s", nome);

	return 0;
}

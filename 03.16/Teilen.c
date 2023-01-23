// Wie oft kann eine einzugebende Zahl durch eine Zahl ohne Rest geteilt werden?

#include<stdio.h>

int main() {
	
	int z, t;

	printf("\n Bitte geben Sie eine Zahl ein: ");
	scanf("%d", &z);

	printf("\n Bitte geben Sie den Teiler ein: ");
	scanf("%d", &t);

	printf(" Ergebnis: %d kann durch %d %dmal geteilt werden, mit Rest %d. \n\n", z, t, z/t, z%t);

	return 0;
	
}

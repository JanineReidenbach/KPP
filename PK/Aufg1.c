// Packungsgröße in Gramm und Preis in Euro einlesen, Preis pro Kilogramm ausgeben

#include<stdio.h>

int main() {
	float packungsgroesse, preis;

	printf("\n Bitte geben Sie die Packungsgröße in Gramm ein: ");
	scanf("%f", &packungsgroesse);

	printf("\n Bitte Preis in Euro angeben: ");
	scanf("%f", &preis);

	printf("\n Der Preis pro kg betägt: %.2f.\n\n", preis/packungsgroesse*1000);

	return 0;
}

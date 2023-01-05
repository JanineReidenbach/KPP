#include<stdio.h>
#include"Umfang.h"
#include"Inhalt.h"

// Funktions-Prototypen
/* ausgelagert in Umfang.h und Inhalt.h:
 * float BerechneUmfang(float, float);
 * float BerechneInhalt(float, float);
*/

// Hauptprogramm
int main() {

	float Radius;
	float pi = 3.141592;

	printf("\n>>>>>>>>>> Umfang & Flächeninhalt <<<<<<<<<\n\n");
	printf("Bitte geben Sie den Radius an: ");
	scanf("%f", &Radius);

	BerechneUmfang(pi, Radius);
	BerechneInhalt(pi, Radius);

	printf("\n\n------------------------------\n\n");

	return 0;
}

// Funktionen
/* ausgelagert in Umfang.c und Inhalt.c:
float BerechneUmfang(float pi, float Radius) {
        printf("\n Der Umfang beträgt: %.2f.", pi * 2 * Radius);
}

float BerechneInhalt(float pi, float Radius) {
        printf("\n Der Flächeninhalt beträgt: %.2f.", pi * Radius * Radius);
}
*/



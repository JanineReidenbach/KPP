#include<stdio.h>

int main() {

	float Radius;
	int pi = 3.141592;

	printf("\n>>>>>>>>>> Umfang & Flächeninhalt <<<<<<<<<\n\n");
	printf("Bitte geben Sie den Radius an: ");
	scanf("%f", &Radius);

	printf("\n Der Umfang beträgt: %.2f.", pi * 2 * Radius);
	printf("\n Der Flächeninhalt beträgt: %.2f.", pi * Radius * Radius);

	printf("\n\n------------------------------\n\n");

return 0;
}

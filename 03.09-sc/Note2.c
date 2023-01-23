// wie 03.06 (if-Abfrage)
// Nach der Eingabe von Punkten, soll die Note ausgegeben werden.

#include<stdio.h>

int main() {

	int N;
	
	printf("\n Bitte geben Sie Ihre Punktzahl (0-10) an, um Ihre Note angezeigt zu bekommen: ");
	scanf("%d", &N);

	printf("\n Ihre Note lautet: "); 
	
	switch(N) {
		
		case 10: printf("Sehr gut!\n");
		break;

		case 9: printf("Gut!\n");
		break;

		case 8: printf("Befriedigend!\n");
		break;

		case 7: printf("Ausreichend!\n");
		break;

		case 6: printf("Mangelhaft!\n");
		break;

		case 5: case 4: case 3: case 2: case 1: case 0: printf("Ungenügend!\n");
		break;
		
		default: printf("Das ist keine gültige Punktzahl, versuchen Sie es nochmal!\n");
		break;
	}

	printf("\n");

	return 0;
}

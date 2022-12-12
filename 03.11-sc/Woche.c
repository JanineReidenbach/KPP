#include<stdio.h>

int main()
{
 	int T;

	printf("\n Bitte geben Sie eine Kennzahl (1-7) für den Wochentag ein: ");
	scanf("%d", &T);

	switch(T) {
	
	case 1: printf("\n Das ist ein Tag aus der ersten Wochenhälfte!\n");
	break;

	case 2: printf("\n Das ist ein Tag aus der ersten Wochenhälfte!\n");
	break;

	case 3: printf("\n Das ist ein Tag aus der ersten Wochenhälfte!\n");
	break;

	case 4: printf("\n Das ist ein Tag aus der zweiten Wochenhälfte!\n");
	break;

	case 5: printf("\n Das ist ein Tag aus der zweiten Wochenhälfte!\n");
	break;

	case 6: printf("\n Das ist ein Wochenendtag!\n");
	break;

	case 7: printf("\n Das ist ein Wochenendtag!\n");
	break;

	default: printf("\n Das ist keine gültige Kennzahl, versuchen Sie es noch mal!\n");
	break;

	}

	printf("\n");
	

return 0;
}

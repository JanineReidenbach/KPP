#include<stdio.h>

int main ()
{
	int Note;

	printf("\n Bitte geben Sie Ihre Punktzahl ein (0-10): ");
	scanf("%d", &Note);

	if(Note == 10) printf("\n Das ist sehr gut!\n\n");

	if(Note == 9) printf("\n Das ist gut!\n\n");

	if(Note == 8) printf("\n Das ist befriedigend!\n\n");

	if(Note == 7) printf("\n Das ist noch ausreichend!\n\n");

	if(Note == 6) printf("\n Das ist absolut mangelhaft!\n\n");

	if(Note < 6 && Note >= 0) printf("\n Ungenügend! Versager!\n\n");

	if(Note < 0 || Note > 10) printf("\n Das ist keine gültige Punktzahl!\n\n");


return 0;
}

#include<stdio.h>

int main ()
{
	int Alter;
	
	printf("\n Sind Sie ein Kind, Erwachsener oder Rentner? Bitte geben Sie Ihr Alter ein: ");
	scanf("%d", &Alter);

	if(Alter <= 18 && Alter > 0) printf(" Du bist ja noch ein Kind!\n\n");

	if(Alter > 18 &&  Alter < 67) printf(" Sie sind erwachsen!\n\n");

	if(Alter >= 67) printf(" Sie sind aber ganz schön alt! :)\n\n");
	
	if(Alter < 0) printf(" Das ist kein gültiges Alter, bitte geben Sie beim nächsten Mal ein Alter zwischen 0 und 150 an.\n\n"); 

return 0;
}

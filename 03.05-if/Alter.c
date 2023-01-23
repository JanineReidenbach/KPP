// Lies das Alter eines Menschen ein. Gib dann in Abhängigkeit vom Alter die entsprechende Zeichenkette aus.
// Kind / Jugendlicher: 0 bis unter 18 Jahre
// Erwachner: 18 bis unter 67 Jahre
// Renter: ab 67 Jahre

#include<stdio.h>

int main () {

	int Alter;
	
	printf("\n Sind Sie ein Kind, Erwachsener oder Rentner? Bitte geben Sie Ihr Alter ein: ");
	scanf("%d", &Alter);

	if(Alter < 18 && Alter > 0) printf(" Du bist ja noch ein Kind!\n\n");

	if(Alter >= 18 &&  Alter < 67) printf(" Sie sind erwachsen!\n\n");

	if(Alter >= 67) printf(" Sie sind aber ganz schön alt! :)\n\n");
	
	if(Alter < 0) printf(" Das ist kein gültiges Alter, bitte geben Sie beim nächsten Mal ein Alter zwischen 0 und 150 an.\n\n"); 

	return 0;
}

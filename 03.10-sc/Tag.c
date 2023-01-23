// Der Benutzer soll eine Zahl als Kennzeichen für einen Wochentag angeben (1 = Montag, 2 = Dienstag, etc.)
// Auf dem Bildschirm soll daraufhin der Name des Wochentages erscheinen.

#include<stdio.h>

int main() {

	int T;

	printf("\n Bitte geben Sie eine Zahl zwischen 1-7 an, um den Wochentag zu bestimmen: ");
	scanf("%d", &T);

	printf("\n Der Wochentag lautet: ");
	
	switch(T) {
	
		case 1: printf("Montag!\n");
		break;

		case 2: printf("Dienstag!\n");
		break;

		case 3: printf("Mittwoch!\n");
		break;
	
		case 4: printf("Donnerstag!\n");
		break;
	
		case 5: printf("Freitag!\n");
		break;

		case 6: printf("Samstag!\n");
		break;
	
		case 7: printf("Sonntag!\n");
		break;

		default: printf("Das ist keine gültige Zahl, bitte geben Sie nur Zahlen von 1-7 an!\n");
		break;

	}

	printf("\n");

	return 0;
}

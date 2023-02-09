// Der Benutzer soll eine Ziffer für einen Tag eingeben und den Tagnamen ausgegeben bekommen, 
// z. B. für 1 -> Montag etc. Speichere die Tagesbezeichnungen in einem Array.

#include<stdio.h>
#include<string.h>

int main() {

	int Zahl;

	printf("\n>>>>> Wochentag-Ausgabe <<<<<\n");
	printf("\nBitte geben Sie eine Zahl zwischen 1 und 7 an: ");
	scanf("%d", &Zahl);

	char* wochentage[7];

	wochentage[0] = "Montag";
	wochentage[1] = "Dienstag";
	wochentage[2] = "Mittwoch";
	wochentage[3] = "Donnerstag";
	wochentage[4] = "Freitag";
	wochentage[5] = "Samstag";
	wochentage[6] = "Sonntag";

	if(Zahl > 0 && Zahl < 8) {

		printf("\n Der %d. Wochentag ist %s.\n\n", Zahl, wochentage[Zahl-1]);

	}

	else printf("\n Bitte geben Sie eine gültige Zahl ein.\n");

	return 0;
}

#include<stdio.h>

// Funktions-Prototypen
int eingabeZahl();
void ausgabeErgebnis(int ergebnis);

// Hauptprogramm
int main () { //Rechenvorgang
	ausgabeErgebnis(eingabeZahl()*2);
	return 0;
}

// Funktionen
int eingabeZahl() {
	int eingabe;
	printf("\n Eingabe Zahl: ");
	scanf("%i", &eingabe);
	return eingabe;
}

void ausgabeErgebnis(int ergebnis) {
	printf("\n Ergebnis: %i\n", ergebnis);
}


// 04.01: Implementiere einen Multiplikationstaschenrechner mit verschiedenen Funktionen.

#include<stdio.h>

float eingabeZahl1() {

	// Eingabe der Zahlen, die multipliziert werden sollen
	float Zahl1;
        printf("\n Bitte geben Sie eine Zahl ein: ");
        scanf("%f", &Zahl1);
	return Zahl1;
}

float eingabeZahl2() {

	// Versuch, beide Zahlen getrennt eínzugeben (anderer Text)
	// weicht von der Aufgabe (3 Funktionen) ab
	float Zahl2;
	printf("\n Bitte geben Sie die zweite Zahl ein: ");
	scanf("%f", &Zahl2);
	return Zahl2;
}

float multipliziere(float Zahl1, float Zahl2) {

	// Berechnung der Multiplikation
	float Ergebnis = Zahl1 * Zahl2;
	return Ergebnis;
}

void ausgabeErgebnis(float Ergebnis) {
 
	// Ausgabe des errechneten Ergebnisses
	printf("\n Das Ergebnis lautet: %.2f. \n\n", Ergebnis);
}

int main () {

	// Kopf der Ausgabe
	printf("\n ------ Multiplikationsrechner -----\n");
	
	// Abfrage der Zahlen über die Funktion
	float Zahl1 = eingabeZahl1();
	float Zahl2 = eingabeZahl2();

	// Berechnung der Multiplikation
	ausgabeErgebnis(multipliziere(Zahl1, Zahl2));

	return 0;
}

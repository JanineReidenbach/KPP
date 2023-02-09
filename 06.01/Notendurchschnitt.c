// Schreibe ein Programm, dass den Benutzer auffordert, zehn Schulnoten als Kommazahl einzugeben. 
// Diese Zahlen sollen in einem Array zwischengespeichert werden.
// Im Anschluss berechnet das Programm den Durchschnitt, welcher am Bildschirm ausgegeben werden soll.

#include<stdio.h>

int main() {

	float Noten[10], Summe = 0;
	int i, j;

	// Werte einlesen
	for(i=0; i<10; i++) {
		printf("\n Bitte geben Sie eine Note mit Kommastelle ein: ");
		scanf("%f", &Noten[i]);
	
		// Durchschnitt berechnen
		Summe += Noten[i]; // Summe = Summe + Noten[i];
	}

	// Durchschnitt ausgeben
	printf("\n Der Notendurchschnitt beträgt %.2f.\n\n", Summe/10);
	
	return 0;
}

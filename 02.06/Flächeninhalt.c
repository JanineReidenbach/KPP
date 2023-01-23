// Lies den Radius eines Kreises ein und gib den Flächeninhalt aus. (pi * r *)

#include<stdio.h>	// Standard

int main () {	// Standard

	float r;		// float für normalgroße Kommazahlen
	#define pi 3.14		// auch als float pi = 3.14; möglich

	printf("\n Berechnung des Flächeninhaltes:\n\n Bitte geben Sie den Radius an: ");	// printf für Aufforderung und \n für Zeilenumbruch
	scanf("%f", &r);	// scanf für Abfragen %f für mögliche Kommazahlen, %d wäre für ganze Zahlen
	
	printf("\n Der Flächeninhalt beträgt %.2f.\n\n", pi*r*r); 	// %.2f beschränkt die Kommastellen der Ausgabe auf 2
									// Berechnung von %f erfolgt nach dem Komma

	return 0;	// Standard
}

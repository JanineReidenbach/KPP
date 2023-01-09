// Gib die Zahlen von 1 bis 25 auf dem Bildschirm aus.

#include<stdio.h>

int main() {

	// Startwert auf 0 festlegen
	int Zahl = 0;

	// Zählschleife mit i initialisieren, auf 1 setzen
	// so lange ausführen, bis Zählschleife bei kleiner gleich 25
	// i in jedem Durchgang hochzählen
	for(int i = 1; i <= 25; i++) {
		printf("\n %d", Zahl+=1); // Kurzschreibweise für Zahl=Zahl+1
	}

	printf("\n\n");

	return 0;
}

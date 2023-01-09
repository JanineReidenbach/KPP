// Gesucht ist der größte gemeinsame Teiler einer Zahl, auch Euklidscher Algorithmus genannt.
// Rekursive Lösungsvariante.

#include<stdio.h>

int Euklid(int x, int y) {
	if (x == y) {
		return x;
	}

	else if (x  > y) {
		return Euklid(x - y, y);
	}

	else {
		return Euklid(x, y - x);
	}
}

int main() {

	int x=0, y = 0;

	printf("\n ----- Berechnung des ggT -----\n");

	printf("\n Bitte geben Sie einen Wert für x ein: ");
	scanf("%d", &x);

	printf("\n Bitte geben Sie einen Wert für y ein: ");
	scanf("%d", &y); 

/*	while( x != y) {

		if (x > y) {

			x = x - y; 

		}
	       	
		else {
	
			y = y - x;
		
		}	

	}	
*/
	printf("\n Das Ergebnis für den ggT lautet: %d. \n\n", Euklid(x,y));

	return 0;
}

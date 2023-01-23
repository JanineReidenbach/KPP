// Gesucht ist der größte gemeinsame Teiler einer Zahl, auch Euklidscher Algorithmus genannt.

#include<stdio.h>

int main() {

	int x = 0, y = 0;

	printf("\n ----- Berechnung des ggT -----\n");

	printf("\n Bitte geben Sie einen Wert für x ein: ");
	scanf("%d", &x);

	printf("\n Bitte geben Sie einen Wert für y ein: ");
	scanf("%d", &y); 


	while(x != y) {

		if (x > y) {

			x = x - y; 

		}
	       	
		else {
	
			y = y - x;
		
		}	

	}	

	printf("\n Das Ergebnis für den ggT lautet: %d. \n\n", x);

	return 0;
}

// Getraenke Automat V0.3

#include<stdio.h>
int main() {

	int Auswahl = 0, Anzahl = 0;
	float Warenwert = 0, Einwurf = 0, Einzelpreis = 0;

	printf("\n -------------------------------------------------- \n");
	printf("\n Getränkeautomat 3.0 | Bitte wählen Sie Ihr Getränk aus: \n");  
	printf(" 1) Wasser (0.50 €)\n 2) Limo (1.00 €)\n 3) Bier (2.00 €)\n");
	
	printf("\n -------------------------------------------------- \n");
	printf("\n >>>>> Getränkeauswahl <<<<<\n");
	printf("\n Geben Sie 1, 2 oder 3 ein: ");
	scanf("%d", &Auswahl);

	while(Auswahl < 1 || Auswahl > 3) {
		printf("\n Geben Sie bitte eine Zahl zwischen 1 - 3 an! Wie lautet Ihre Wahl?: ");
		scanf("%d", &Auswahl);	
	}
        
	if(Auswahl > 0 && Auswahl < 4) {
	
		switch(Auswahl) {
			case 1: Einzelpreis = 0.5;
			break;
			case 2: Einzelpreis = 1;
			break;
			case 3: Einzelpreis = 2;
			break;
		}

		printf("\n -------------------------------------------------- \n");
       		printf("\n >>>>> Mengenauswahl <<<<<\n");

		printf("\n Wie viele Flaschen? ");
		scanf("%d", &Anzahl);

		Warenwert = Anzahl * Einzelpreis;
		
		printf("\n -------------------------------------------------- \n");
		printf("\n >>>>> Bezahlvorgang <<<<<\n");

		while(Warenwert > 0) {

			printf("\n Bitte werfen Sie %.2f € in Münzen (0,50 €, 1 € oder 2 €) ein: ", Warenwert);
			scanf("%f", &Einwurf);
			if(Einwurf == 1 || Einwurf == 0.50 || Einwurf == 2) {

				Warenwert = Warenwert-Einwurf;

			}
			
			else printf("\n Falscher Einwurf!\n");

			if(Warenwert <= 0) {
				printf("\n Vielen Dank! \n");

				printf("\n -------------------------------------------------- \n");
				printf("\n >>>>> Flaschenausgabe <<<<< \n");
				for(int i = 1; i <= Anzahl; i++) {
					printf("\n Bitte entnehmen Sie Getränk %d von %d! \n", i, Anzahl);
				}

			}
		} 
		printf("\n Guten Durst und auf Wiedersehen! \n\n ------------------------------------------------\n\n");
	}

return 0;
}

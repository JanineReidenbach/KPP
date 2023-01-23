// Getraenke Automat V0.2
// Erweitere den Getränkeautomat.

#include<stdio.h>

int main() {

	int Auswahl;
	float Einwurf = 0;

	printf("\nGetränkeautomat 2.0 | Bitte wählen Sie Ihr Getränk aus: \n 1) Wasser (0.50 €)\n 2) Limo (1.00 €)\n 3) Bier (2.00 €)\n\n Geben Sie 1, 2 oder 3 ein: ");
	scanf("%d", &Auswahl);

//	if(Auswahl > 0 && Auswahl < 4) {		// if-Abfrgage überflüssig bei switch-Konstrukt
 	
		switch(Auswahl) {

			case 1: printf("\n Bitte werfen Sie 0.50 € ein: ");
				scanf("%f", &Einwurf);
/* Version 1 */			if(Einwurf == 0.50) {		
					printf("\n Vielen Dank, bitte entnehmen Sie das Getränk!\n\n");
				}	
				else {
					printf("\n Falscher Einwurf!\n");
				}	
			break;

			case 2: printf("\n Bitte werfen Sie 1.00 € ein: ");
				scanf("%f", &Einwurf);
/* Version 2 */			if(Einwurf == 1.00) printf("\n Vielen Dank, bitte entnehmen Sie das Getränk!\n\n");
				if(Einwurf != 1.00) printf("\n Falscher Einwurf!\n\n");
			break;

			case 3: printf("\n Bitte werfen Sie 2.00 € ein: ");
				scanf("%f", &Einwurf);
/* Version 3 */			if(Einwurf == 2.00) printf("\n Vielen Dank, bitte entnehmen Sie das Getränk!\n\n");
				else printf("\n Falscher Einwurf!\n\n");
			break;

			default: printf("\n Bitte geben Sie eine Zahl zwischen 1 - 3 ein!\n"); //	Block wird nie ausgelöst bei if-Abfrage
			break;
		}
/*	}
	
	else {
		printf("\n Geben Sie bitte eine Zahl zwischen 1 - 3 ein!\n");
	}
*/
return 0;
}

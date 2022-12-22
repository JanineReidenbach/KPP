// Getraenke Automat V0.3

#include<stdio.h>
int main()

{
	int Auswahl = 0, Anzahl = 0;
	float Warenwert = 0, Einwurf = 0, Einzelpreis = 0;

	printf("\nGetränkeautomat 3.0 | Bitte wählen Sie Ihr Getränk aus: \n");  
	printf(" 1) Wasser (0.50 €)\n 2) Limo (1.00 €)\n 3) Bier (2.00 €)\n\n Geben Sie 1, 2 oder 3 ein: ");
	scanf("%d", &Auswahl);

	if(Auswahl < 1 || Auswahl > 3) {
		while(Auswahl < 1 || Auswahl > 3) {
			printf("\n Geben Sie bitte eine Zahl zwischen 1 - 3 an! Wie lautet Ihre Wahl?: ");
			scanf("%d", &Auswahl);	
		}
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

		printf("\n Wie viele Flaschen? ");
		scanf("%d", &Anzahl);

		Warenwert = Anzahl * Einzelpreis;

		printf("\n Bitte werfen Sie %.2f € in Münzen (0,50 €, 1 € oder 2 €) ein: ", Warenwert);
		scanf("%f", &Einwurf);
			if(Einwurf == 1 || Einwurf == 0.50 || Einwurf == 2) {

				while(Einwurf != Warenwert) {
				Warenwert = Warenwert-Einwurf;
				
				printf("\n Es fehlen noch %.2f €, bitte werfen Sie noch eine Münze ein: ", Warenwert);
				scanf("%f", &Einwurf);

				}

				if(Warenwert = Einwurf) {
				printf("\n Vielen Dank, bitte entnehmen Sie das Getränk!\n\n");
				}
			}

			else {
			printf("\n Falscher Einwurf! Sie erhalten jetzt Ihr Geld zurück und können nochmal starten.\n\n");
			}
	}

	else {
		printf("\n Geben Sie bitte eine Zahl zwischen 1 - 3 ein!\n");
	}

return 0;
}

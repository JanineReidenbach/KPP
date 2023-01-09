// Lies sukzessive Zahlen von der Konsole ein,
// bis der Benutzer die Zahl 0 eingibt. 
// Gib dann die größte und die kleinste eingegebene Zahl aus.

#include<stdio.h>

int main() {

	printf("\n\n>>>>> Größer - kleiner - Bestimmung <<<<<");
	printf("\n\nBeenden Sie die Eingabe jederzeit mit 0.");

	float Zahl1, Zahl2, big, small;

	printf("\n\n Bitte geben Sie eine Zahl ein: ");
        scanf("%f", &Zahl1);

	if(Zahl1 != 0) {

		small = Zahl1;

		do {
			printf("\n Bitte geben Sie eine weitere Zahl ein: ");
			scanf("%f", &Zahl2);

			if(Zahl2 != 0 && small < Zahl2) {
				big = Zahl2;
			}

			if(Zahl2 != 0 && small > Zahl2) {
			//	big = small;
				small = Zahl2;
			
			}

//			else {
//				big = Zahl2;
//			}

		
		}while(Zahl2 > 0);
		
		      	printf("\n %.2f ist die kleinste Zahl, %.2f ist die größte Zahl.\n\n", small, big);

		
	}

	else printf("\n Abbruch\n\n");

	return 0;

}
	 


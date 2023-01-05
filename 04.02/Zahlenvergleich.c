// Dieses Programm soll zwei Zahlen einlesen und ausgeben, ob die erste Zahl größer, kleiner oder gleich der zweiten Zahl ist.

//Modifikation, Vergleichs-Funktion soll ausgelagert werden mithilfe von Prototypen.

#include<stdio.h>

// Funktions-Prototypen
int VergleicheZahl();

// Hauptprogramm
int main() {

        printf("\n>>>>>>>>>> Zahlenvergleich <<<<<<<<<<\n");
	
	VergleicheZahl();	
	
	printf("\n\n");
        printf("-----------------------------------------------\n\n");

	return 0;

}

// Funktionen
int VergleicheZahl() {

	float Zahl1, Zahl2;
	
	printf("\n Bitte geben Sie die erste Zahl ein: ");
	scanf("%f", &Zahl1);

	printf("\n Bitte geben Sie die zweite Zahl ein: ");
	scanf("%f", &Zahl2);

	printf("\n Das Ergbenis lautet: ");

	if(Zahl1 < Zahl2) printf("%.2f ist kleiner als %.2f.", Zahl1, Zahl2);

	if(Zahl1 == Zahl2) printf("%.2f und %.2f sind gleich.", Zahl1, Zahl2);

	if(Zahl1 > Zahl2) printf("%.2f ist größer als %.2f.", Zahl1, Zahl2);

}


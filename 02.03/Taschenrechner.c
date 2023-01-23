// Schreibe ein Programm, das zwei Kommazahlen einlesen kann und daraus die Summe berechnet. 

#include<stdio.h>

int main(){

	float Zahl1,Zahl2;	// Zahlen als Dezimalzahlen definieren

	printf("\n Taschenrechner \n\n Geben Sie die erste Zahl ein: ");
	scanf("%f", &Zahl1);

	printf("\n Geben Sie die zweite Zahl ein: ");
	scanf("%f", &Zahl2);
	
	printf("\n Die Summe ergibt: %.2f. \n\n", Zahl1+Zahl2);

	return 0;
}

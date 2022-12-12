
#include<stdio.h>
int main(){
	float Zahl1,Zahl2;	//Zahlen als Dezimalzahlen definieren
	printf("\n Taschenrechner \n\n Geben Sie die erste Zahl ein: ");

	scanf("%f", &Zahl1);

	printf("\n Geben Sie die zweite Zahl ein: ");
	scanf("%f", &Zahl2);
	
	printf("\n Die Summe ergibt: ");
	printf("%.2f", Zahl1+Zahl2);
	printf("\n\n");
return 0;
}

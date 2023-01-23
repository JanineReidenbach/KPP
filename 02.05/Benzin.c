// Schreibe ein Programm, das den Benzinverbrauch eines Autos in Litern je 100 Kilometer errechnet. 
// Als Eingabe benötigt das Programm den Benzinverbrauch insgesamt in Litern und die dazu gefahrenen Kilometer.
// Der Verbrauch pro 100 Kilometer ergibt sich dann aus Liter * 100 / km.

#include<stdio.h>

int main () {

	float V, KM;

	printf ("\n Benzinverbrauch\n Bitte geben Sie den Verbrauch des PKW in Litern an: ");
	scanf ("%f", &V);

	printf ("\n Wie viele KM sind Sie gefahren: ");
	scanf ("%f", &KM);

	printf ("\n Sie haben einen Durchschnittsverbrauch von: %.2f. \n\n", V*100/KM);

	return 0;
}

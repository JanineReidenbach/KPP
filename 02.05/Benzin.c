
#include<stdio.h>

int main ()
{
	float V,KM;
	printf ("\n Benzinverbrauch\n");
	printf ("\n Bitte geben Sie den Verbrauch des PKW in Litern an: ");
	scanf ("%f", &V);
	printf ("\n Wie viele KM sind Sie gefahren: ");
	scanf ("%f", &KM);
	printf ("\n Sie haben einen Durchschnittsverbrauch von: ");
	printf ("%f", V*100/KM);
	printf ("\n");

return 0;
}

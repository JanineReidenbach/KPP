
#include<stdio.h>

int main ()
{
	int V,KM;
	printf ("\n Benzinverbrauch\n");
	printf ("\n Bitte geben Sie den Verbrauch des PKW in Litern an: ");
	scanf ("%d", &V);
	printf ("\n Wie viele KM sind Sie gefahren: ");
	scanf ("%d", &KM);
	printf ("\n Sie haben einen Durchschnittsverbrauch von: ");
	printf ("%d", V*100/KM);
	printf ("\n");

return 0;
}

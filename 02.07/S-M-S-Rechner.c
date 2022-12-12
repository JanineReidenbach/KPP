
#include<stdio.h>
int main()
{
	int t;	// keine Fließkommazahlen notwendig	

	printf("\n Stunden-Minuten-Sekunden-Rechner:\n\n Bitte geben Sie die Tage ein: ");
		scanf("%d", &t);	// wegen int, keine Kommazahlen
	printf("\n Das sind %d Stunden,", t*24);	// Ausgabe pro Ausgabe, sonst falsche Syntax
	printf("%d Minuten und ", t*24*60);
	printf("%d Sekunden.\n\n", t*24*60*60);

return 0;
}


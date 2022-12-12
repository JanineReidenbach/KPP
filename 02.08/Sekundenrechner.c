
#include<stdio.h>
int main()
{
	//int s;

 	int s, t = 24 * 60 * 60, h = 60 * 60, m = 60;	// Variablen können zeitgleich erstellt und definiert werden
	
	printf("\n Bitte geben Sie eine Anzahl an Sekunden ein: ");
	
	scanf("%d", &s);

	//printf("\n Das sind %d Tage,", s/t);
	//printf(" %d Stunden,",(s%t)/h);	
	//printf(" %d Minuten", ((s%t)%h)/m);
	//printf(" und %d Sekunden.\n", ((s%t)%h)%m);	// funktioniert auch in dieser Kette mit 3x %

	printf("\n Das sind %d Tage,", s / t);
	int s1 = s % t;					// oder jedes Mal neue Variable benennen
	
	printf(" %d Stunden,", s1 / h);
	int s2 = s1 % h;
	
	printf(" %d Minuten", s2 / m);
	int s3 = s2 % m;
	
	printf(" und %d Sekunden.",s3);
	printf("\n\n");

return 0;
}

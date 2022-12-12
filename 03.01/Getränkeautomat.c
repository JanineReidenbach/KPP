// Getraenke Automat V0.1

#include<stdio.h>
int main()

{
int einwurf = 0;
printf("Getraenkeautomat | Bitte werfen Sie 1 Euro ein: ");
scanf("%d", &einwurf);

// Überprüfe Geldstück
if(einwurf == 1) {
	printf("\n Vielen Dank, bitte entnehmen Sie Ihr Getraenk.\n");
} else {
	printf("\n Sie haben kein 1 Euro Stueck eingeworfen. \n");
}

return 0;
}

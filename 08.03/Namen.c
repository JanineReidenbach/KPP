#include<stdio.h>
#include<string.h>


int main() {

	char* Vornamen[6];

	Vornamen[0] = "Paul";
	Vornamen[1] = "Susi";
	Vornamen[2] = "Otto";
	Vornamen[3] = "Trixi";
	Vornamen[4] = "Wilma";

	char* Nachnamen[6];

	Nachnamen[0] = "Müller";
	Nachnamen[1] = "Bauer";
	Nachnamen[2] = "Hammer";
	Nachnamen[3] = "Berg";
	Nachnamen[4] = "Roller";

//	int size1 = 0, size2 = 0; 
	//size1 = strlen(Vornamen);
//	size2 = strlen(Nachnamen);

//	printf("Länge von Vornamen: %d, Länge von Nachnamen: %d", size1, size2);

	for(int i = 0; i < 5; i++) {

		printf("%s _ %s \n", Vornamen[i], Nachnamen[i]);

	}

	return 0;
}

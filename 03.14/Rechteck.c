// 03.14: Mit zwei Schleifen ein 10*10 Rechteck ausgeben lassen.

#include<stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 10; i++) {
	
		for(j = 0; j < 10; j++) {

			printf("*");

	// ginge auch mit einer while-Schleife
	//	while (j < 10) {
	//		printf("*");
	//		j++;

		}

		printf("\n");

	}

	return 0;

}

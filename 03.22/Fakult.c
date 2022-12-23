// 03.22: Lies eine Zahl ein und gib die Fakultät aus.

#include<stdio.h>

int main() {

	int Zahl, Faku = 1;

	printf("\n ----- Berechnung der Fakultät ----- \n");
	printf("\n Bitte geben Sie eine ganze Zahl ein: ");
	scanf("%d", &Zahl);

	for(int i = 1; i <= Zahl; i++) {

		Faku = Faku * i;

	}

	printf("\n Die Fakultät lautet %d. \n\n", Faku);

	return 0;
}

#include<stdio.h>

int main()
{

	int f0 = 0, f1 = 1, i, n, erg ;

	printf("\n Hier wird die Zahl aus der Fibonacci-Folge berechnet. Bitte geben Sie eine Zahl größer 1 ein: ");
	scanf("%d", &n);

	if(n > 1) {
		for(i = 2; i <= n; i++){
			erg = f0 + f1;
			f0 = f1;
			f1 = erg;
		}
	}
	printf("Die %d.Fibonacci-Zahl ist %d", n, f1);

	printf("\n\n");
	return 0;
}

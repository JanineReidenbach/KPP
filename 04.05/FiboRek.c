// Schreibe ein rekursives Programm für die Fibonacci-Folge.

#include<stdio.h>

int Fibo(int n) {

	if (n == 0) { 		// oder if (n == 0 || n == 1)
		return n; 	// oder return 0;
	}

	else if (n == 1) {
		return n; 	// oder return 1;
	}

	else if (n > 1) {
		return Fibo(n - 1) + Fibo(n - 2);
	}
}

int main() {

	int n, i, j; 

	printf("\n Hier wird die Zahl aus der Fibonacci-Folge berechnet. Bitte geben Sie eine Zahl größer 1 ein: ");
	scanf("%d", &n);

	// Einfache Ausgabe
	printf("\n Die %d. Fibonacci-Zahl lautet %d. \n", n, Fibo(n));

	// Ausgabe der Vorwärts-Folge
	for(i = 0; i <= n; i++) {
		printf(" %d ", Fibo(i));
	}
	
	printf("\n");

	// Ausgabe der Rückwärts-Folge
	for(j = n; j >= 0; j--) {
		printf(" %d ", Fibo(j));
	}

	printf("\n\n");
	
	return 0;
}

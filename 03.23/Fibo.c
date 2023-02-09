// Schreibe ein Programm, dass die Fibonacci-Zahl f(n) ausgibt.
// Die Fibonacci-Folge ist eine unendliche Folge von Zahlen, bei der sich jeweils die folgende Zahl durch Addition ihrer beiden vorherigen Zahlen ergibt.
// Errechnet werden können sie mittels 1+2=3, 2+3=5, 3+5=8, 5+8=13 usw.
// Die Formel lautet also F(n) = F(n-1) + F(n-2)

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

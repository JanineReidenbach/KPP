// Lass den Benutzer drei unterschiediche Zahlen eingeben.
// Gib auf dem Bildschirm die Zahl aus, die am kleinsten ist.

#include<stdio.h>

int main()
{
	int A, B, C;

	printf("\n Bitte geben Sie drei Zahlen ein.\n\n Erste Zahl: ");
	scanf("%d", &A);
	printf("\n Zweite Zahl: ");
	scanf("%d", &B);
	printf("\n Dritte Zahl: ");
	scanf("%d", &C);

	printf("\n Ergebnis: ");

	if(A <= B && A <= C) printf("\n %d ist die kleinste Zahl.\n", A);

	if(B < A && B <= C) printf("\n %d ist die kleinste Zahl.\n", B);

	if(C < A && C < B) printf("\n %d ist die kleinste Zahl.\n", C);

	// if(A == B || A == C || B == C) printf("\n Eine oder mehrere Zahlen sind doppelt, das Ergebnis ist nicht eindeutig.\n");

	printf("\n");

	return 0;
}

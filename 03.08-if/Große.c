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

	if(A >= B && A >= C) printf("%d ist die größte Zahl!\n", A);

	if(B >= C && B > A) printf("%d ist die größte Zahl!\n", B);

	if(C > B && C > A) printf("%d ist die größte Zahl!\n", C);

	printf("\n");

return 0;
}

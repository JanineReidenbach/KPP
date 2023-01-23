#include<stdio.h>

int main() {

	int rest = 785, c200 = 0, c5 = 0, c50 = 0, c10 = 0;

	c200 = rest / 200;
	rest = rest % 200;
	
	c50 = rest / 50;
	rest = rest % 50;

	c10 = rest / 10;
	rest = rest % 10;

	c5 = rest / 5;
	rest = rest % 5;

	printf("\n 2 €: %dx | 50 Cent: %dx | 10 Cent: %dx | 5 Cent: %dx | Rest: %d \n\n", c200, c50, c10, c5, rest);

	return 0;
}

#include<stdio.h>

int main() {

	int rest = 0, c200 = 0, c50 = 0, c10 = 0, c5 = 0;

	printf("\n Bitte geben Sie einen Betrag in Cent ein: ");
	scanf("%d", &rest);

	while(rest >= 200) {
		rest = rest - 200;
		c200++;
	}

	while(rest < 200 && rest >= 50) {
		rest = rest - 50;
		c50++;
	}

	while(rest < 50 && rest >= 10) {
		rest = rest - 10;
		c10++;
	}

	while(rest < 10 && rest >= 5) {
		rest = rest - 5;
		c5++;
	}

	printf("\n %dx 2 € | %dx 0,50 € | %dx 0,10 € | %dx 0,05 € | Rest: %d \n\n", c200, c50, c10, c5, rest);
	return 0;
}

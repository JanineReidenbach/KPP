// Gib das kleine 1*1 auf dem Bildschirm aus.

#include<stdio.h>

int main() {
	
	printf("\n----- Das kleine 1*1 -----");

	for(int i = 1; i <= 10; i++) {
		printf("\n %d --> %d", i, i*i);
	}

	printf("\n\n");
	return 0;
}

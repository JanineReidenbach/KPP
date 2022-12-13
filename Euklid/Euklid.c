#include<stdio.h>

int main()
{

int x=0, y = 0;

printf("Bitte geben Sie x ein: ");
scanf("%d", &x);

printf("Bitte geben Sie y ein: ");
scanf("%d", &y); 


while( x != y)
{
	if (x > y)
	{
	x=x-y;
	//printf("Das Ergebnis ist: %d\n", x);
	} else {
	y=y-x;
	//printf("Das Ergebnis ist: %d\n", y);
	}

}

printf("Das Ergebnis ist: %d\n", x);

return 0;
}

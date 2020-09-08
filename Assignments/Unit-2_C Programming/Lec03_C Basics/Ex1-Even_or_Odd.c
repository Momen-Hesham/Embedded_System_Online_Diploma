#include <stdio.h>

int main()
{
	int Num;

	printf("Enter an integer you want to check:  ");
	fflush(stdout);
	scanf("%d", &Num);
	if ( (Num % 2) == 0 )
		printf("%d is even.", Num);
	else
		printf("%d is odd.\n", Num);

	return 0;
}
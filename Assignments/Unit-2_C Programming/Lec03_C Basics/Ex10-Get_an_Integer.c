#include <stdio.h>

int main()
{
	int Num;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Num);
	printf("You entered: %d\n", Num);
	return 0;
}

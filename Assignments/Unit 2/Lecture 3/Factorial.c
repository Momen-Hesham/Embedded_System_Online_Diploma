#include <stdio.h>

int main()
{
	int Num , Fact=1;

	printf("Enter an integer:  ");
	fflush(stdout);
	scanf("%d", &Num);
	if (Num >= 0)
	{
		for (int i = 1; i <= Num; i++)
		{
			Fact *= i;
		}
		printf("Factorial = %d\n", Fact);
	}
	else
		printf("Error!!! Factorial of negative number doesn't exist.\n");

	return 0;
}

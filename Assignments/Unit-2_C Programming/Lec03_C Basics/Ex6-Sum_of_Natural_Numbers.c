#include <stdio.h>

int main()
{
	int Num,Sum=0;

	printf("Enter an integer:  ");
	fflush(stdout);
	scanf("%d", &Num);
	if (Num >= 0)
	{
		for (int i = 0; i <= Num; i++)
		{
			Sum += i;
		}
		printf("Sum = %d\n", Sum);
	}
	else
		printf("Wrong Input.\n");

	return 0;
}

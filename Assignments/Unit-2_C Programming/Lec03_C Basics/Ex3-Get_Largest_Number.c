#include <stdio.h>

int main()
{
	float Num1, Num2, Num3;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &Num1, &Num2, &Num3);
	if (Num1 > Num2)
	{
		if (Num1 > Num3)
		{
			printf("Largest number= %.2f\n", Num1);
		}
		else
		{
			printf("Largest number= %.2f\n", Num3);
		}
	}
	else
	{
		if (Num2 > Num3)
		{
			printf("Largest number= %.2f\n", Num2);
		}
		else
		{
			printf("Largest number= %.2f\n", Num3);
		}
	}
	return 0;
}

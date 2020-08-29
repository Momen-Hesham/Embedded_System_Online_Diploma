#include <stdio.h>

int main()
{
	float op1, op2;
	printf("Enter two numbers : ");
	fflush(stdout);
	scanf("%f %f", &op1, &op2);
	printf("Sum = %f\n", op1 * op2);
	return 0;
}

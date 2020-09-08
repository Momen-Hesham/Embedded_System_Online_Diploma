#include <stdio.h>

int main()
{
	float op1, op2,temp;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&op1);
	fflush(stdin);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f", &op2);
	temp = op1;
	op1 = op2;
	op2 = temp;
	printf("After swapping, value of a = %.2f\n", op1);
	printf("After swapping, value of b = %.2f\n", op2);

	return 0;

}


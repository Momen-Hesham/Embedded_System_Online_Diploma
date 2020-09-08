#include <stdio.h>

int main()
{
	int op1, op2;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d %d", &op1, &op2);
	printf("Sum = %d\n",op1+op2);
	return 0;
}

#include <stdio.h>

int main()
{
	char op;
	float operand1, operand2;
	printf("Enter operator either + or - or * or divide(/) : ");
	fflush(stdout);
	scanf("%c", &op);
	printf("Enter two operands: ");
	fflush(stdout); fflush(stdin);
	scanf("%f %f", &operand1,&operand2);
	
	switch(op)
	{
		case'+':
			{
				printf("%.1f + %.1f = %.1f", operand1, operand2, operand1 + operand2);

			}break;
		case'-':
			{
				printf("%.1f - %.1f = %.1f", operand1, operand2, operand1 - operand2);

			}break;
		case'*':
			{
				printf("%.1f * %.1f = %.1f", operand1, operand2, operand1 * operand2);

			}break;
		case'/':
			{
				printf("%.1f / %.1f = %.1f", operand1, operand2, operand1 / operand2);

			}break;
		default:
			{
				printf("Wrong Input.\n");
			}break;
	}
	return 0;
}

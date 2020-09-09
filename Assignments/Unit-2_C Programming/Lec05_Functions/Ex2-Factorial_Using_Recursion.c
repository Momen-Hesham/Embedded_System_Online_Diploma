#include <stdio.h>

unsigned int Calc_Factorial(unsigned int n);

int main()
{
	unsigned int Num, res;
	
	printf("Enter a positive number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Num);

	res=Calc_Factorial(Num);

	printf("Factorial of %d = %d\n",Num,res);
	
	return 0;
}

unsigned int Calc_Factorial(unsigned int n)
{
	if (n == 1)
		return 1;
	else
		return( n * Calc_Factorial(n - 1));
}

#include <stdio.h>

int Calc_Power(int Num, int Repeat);

int main()
{
	int Base,res;
	unsigned int Power;
	printf("Enter base number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &Base);

	printf("Enter power number(positive integer): ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &Power);

	res = Calc_Power(Base, Power);

	printf("%d ^ %d = %d\n", Base, Power, res);

	return 0;
}

int Calc_Power(int Num, int Repeat)
{
	if (1 == Repeat)
		return Num;
	else
		return (Num * Calc_Power(Num, Repeat - 1));
}
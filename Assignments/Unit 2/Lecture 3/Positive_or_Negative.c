#include <stdio.h>

int main()
{
	float Num;

	printf("Enter a number:  ");
	fflush(stdout);
	scanf("%f", &Num);
	if (Num == 0)
		printf("You entered Zero.\n");
	else if (Num > 0)
		printf("%.2f is positive.\n", Num);
	else
		printf("%.2f is negative.\n", Num);

	return 0;
}

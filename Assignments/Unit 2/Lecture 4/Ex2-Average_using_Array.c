#include <stdio.h>


int main()
{
	float arr[100],Sum=0;
	unsigned int Num;
	do {
		printf("Enter the numbers of data: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &Num);
	} while (Num <= 0 || Num > 100);
	for(int i=0;i<Num;i++)
	{
		printf("%d. Enter number: ", i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[i]);
		Sum += arr[i];
	}
	printf("Average = %.2f \n", Sum / Num);




	return 0;
}
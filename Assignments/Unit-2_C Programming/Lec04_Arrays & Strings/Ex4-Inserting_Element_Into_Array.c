#include<stdio.h>

int main()
{
	int arr[100];
	int Num, InNum, InLocation;
	do {
		printf("Enter no of elements : ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &Num);
	} while (Num <= 0 || Num > 99);
	for (int i = 0; i < Num; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &InNum);

	printf("Enter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &InLocation);
	if (InLocation > 0 && InLocation < 100)
	{
		for (int i = Num; i > (InLocation - 1); i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[InLocation - 1] = InNum;
		for (int i = 0; i < Num + 1; i++)
		{
			printf("%d\t", arr[i]);

		}
	}
	else
		printf("Invalid Input.\n");
	return 0;
}
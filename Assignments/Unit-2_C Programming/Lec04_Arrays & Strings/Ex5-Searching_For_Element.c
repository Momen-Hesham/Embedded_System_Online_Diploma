#include <stdio.h>

int main()
{
	int arr[100];
	int Num, InNum, Location=-1;
	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Num);

	for (int i = 0; i < Num; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &InNum);
	for (int i = 0; i < Num; i++)
	{
		if (arr[i] == InNum)
		{
			Location = i;
			break;
		}
	}
	if (Location == -1)
		printf("Number is NOT exist.\n");
	else
		printf("Number found at the location = %d\n", Location + 1);


	return 0;
}
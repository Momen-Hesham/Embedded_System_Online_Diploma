#include <stdio.h>

void Reverse_Sentense(void);

int main()
{
	
	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);
	
	Reverse_Sentense();
	printf("\n");

	return 0;
}

void Reverse_Sentense(void)
{
	char c;
	scanf("%c", &c);
	if (!(c == 13 || c==10))
	{
		Reverse_Sentense();
		printf("%c", c);
	}
}

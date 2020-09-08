#include <stdio.h>
int GetString(char str[]);


int main()
{
	char c[100],temp;
	int x;
	printf("Enter the string  : ");
	fflush(stdin); fflush(stdout);
	x=GetString(c);
	

	for (int i = 0; i < x / 2; i++)
	{
		temp = c[i];
		c[i] = c[x - i - 1];
		c[x - i - 1] = temp;
	}
	
	printf("Reverse string is : %s\n", c);

	return 0;
}


int GetString(char str[])
{
	char c;
	int i = 0;
	while(1)
	{
		scanf("%c", &c);
		str[i] = c;
		i++;
		if ((c == 13) || (c == 10))
			break;
	} 

	str[i - 1] = '\0';

	return (i-1);

}

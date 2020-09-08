#include <stdio.h>
int GetString(char str[]);


int main()
{
	char c[100];
	int x;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	x=GetString(c);
	
	/*
	In case using gets() function. 
	while (1)
	{
		if ('\0' == c[i])
			break;
		x++;
		i++;
	}
	*/

	printf("Length of string: %d\n", x);

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

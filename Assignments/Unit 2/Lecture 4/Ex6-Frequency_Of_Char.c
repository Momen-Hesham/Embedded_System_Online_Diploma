#include <stdio.h>
int GetString(char str[]);


int main()
{
	char c[100],InChar;
	int x,counter=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	x=GetString(c);

	printf("Enter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &InChar);

	for (int i = 0; i < x; i++)
	{
		if (c[i] == InChar)
			counter++;

	}
	/*
	In case using gets() function.
	do
	{
		if(InChar==c[i])
			counter++;
		
		i++;
	}while('\0' == c[i]);

	*/

	printf("frequency of %c = %d \n",InChar,counter);

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

#include <stdio.h>

int main()
{
	char c;

	printf("Enter a character:  ");
	fflush(stdout);
	scanf("%c", &c);
	if ( ( c>=65 && c<=90 ) || ( c>=97 && c<=122 ) )
		printf("%c is an alphabet.\n",c);
	else
		printf("%c is not an alphabet.\n",c);

	return 0;
}

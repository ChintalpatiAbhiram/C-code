#include <stdio.h>
#include <stdlib.h>

int StrLen(char *arr)
{
	int i;

	while(*arr)
	{
		*arr++;
		i++;
	}

	return i;
}

int main()
{
	char arr[] = "Hello";
	int x = StrLen(arr);
	printf("Length of string is %d\n",x);
	
	return 0;
}


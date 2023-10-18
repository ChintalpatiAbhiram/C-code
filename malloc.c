#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *strptr = NULL;
	int x;

	//Taking limit 
	printf("Enter the limit : ");
	scanf("%d",&x);
	
	// Assigning malloc to pointer
	strptr = (char*) malloc( x * (sizeof(char)));

	// Check for malloc issues
	if (strptr == NULL)
	{
		printf("malloc error\n");
		return 0;
	}
	
	// Taking string input and printing
	printf("Enter string :");
	scanf("%s",strptr);
	printf("The string entered is : %s.\n",strptr);

	// Free pointer
	free(strptr);
	strptr = NULL;
	printf("Pointer freed.\n");

	return 0;
}


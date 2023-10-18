#include <stdio.h>
#include <stdlib.h>

int StrLen(const char str[]);
void StrAdd(char result[],const char str1[],const char str2[]);
int StrEqual(const char str1[],const char str2[]);

int main()
{
	const char str1[] = "OK";
	const char str2[] = "WHATEVER";
	char str3[20];
	
	// Printing strings
	printf("String 1 is %s\n",str1);
	printf("String 2 is %s\n",str2);

	printf("\n");

	// Testing StrLen function
	printf("Length of str1 is %d.\n",StrLen(str1));
	printf("Length of str2 is %d.\n",StrLen(str2));
	
	printf("\n");

	// Testing StrAdd function
	StrAdd(str3,str1,str2);
	
	printf("\n");

	// Testing StrEqual function
	if (StrEqual(str1,str2) == 1)
		printf("%s and %s are equal\n",str1,str2);
	if (StrEqual(str1,str2) == 0)
		printf("%s and %s are not equal\n",str1,str2);
	
}

//Function to count number of characters in a string without strlen()
int StrLen (const char str[])
{
	int count = 0;
	while (str[count] != '\0')
		++count;
	return count;
}

// Function to concatenate two strings instead of strcat()
void StrAdd (char result[],const char str1[],const char str2[])
{
	int i,j;
	// Loop for concatenation of strings
	for (i = 0; str1[i] != '\0';++i)
	{
		result[i] = str1[i];
	}
	for (j = 0; str2[j] != '\0';++j)
	{
		result[i + j] = str2[j];
	}

	result[i + j]  = '\0';

	printf("result[] = %s\n",result);

}

int StrEqual(const char str1[],const char str2[])
{
	int count = 0,a;
	while (str1[count] != '\0' && str2[count] != '\0')
	{
		if (str1[count] == str2[count]) 
		{
			count++;
			a = 1;
		}
		else
		{
			a = 0;
			break;
		}
	}
	return a;
}


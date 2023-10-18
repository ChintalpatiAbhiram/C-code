#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void RevStr(char str[50]);
void SortStr(char str[50]);

int main()
{
	char str[50];
	printf("Enter your string :");
	scanf("%s",str);
	
	// Testing reverse string function
	RevStr(str);
	
	//Testing sorted string
	SortStr(str);
	
	return 0;
}

void RevStr(char str[50])
{
	char revstr[50];
	int i = 0;
	//Creating a string with reverse order
	do
	{
		revstr[i] = str[strlen(str) - (i+1)];
		i++;
	}while (i < strlen(str));
	
	printf("The reverse order of %s is %s.\n",str,revstr);

}

void SortStr(char str[50])
{
	int i,j,k,n;
	n = strlen(str);
	char sortstr[50];

	for (i = 0 ; i < n; i++)
	{
		sortstr[i] = str[i];
	}

	for (i = 0; i < n - 1 ; i++)
	{
		k = 0; // k value = 0 if no swapping

		for (j = 0 ; j < n - (i - 1) ; j++)
			{
				if (str[j] > str[j +1])
				{
					sortstr[j + 1] = str[j];
					sortstr[j] = str[j + 1];
					k = 1; // k value = 1 if swapping happens
				}
			}
		if (k == 0)
		{
			break;
		}
	}
	printf("strlen = %ld.\n",strlen(str));
	printf("The sorted %s is %s.\n",str,sortstr);
}


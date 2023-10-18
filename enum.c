#include <stdio.h>
int main()
{
	enum colour {red,yellow,green};
	enum colour mycolour;
	mycolour = yellow;
	printf("%d\n",mycolour);
	return 0;
}


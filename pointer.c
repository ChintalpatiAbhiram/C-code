#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x = 10;
	int const *px = NULL;

	printf("Value : ");
	scanf("%d",&x);
	px = &x;
	printf("\n");
	printf("Address : %p\n",&x);
	printf("pointer : %p\n",px);
	printf("Value from pointer : %d\n",*px);

	return 0;
}


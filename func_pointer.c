#include <stdio.h>
#include <stdlib.h>

void square(int *px);

int main()
{
	int x,temp;
	printf("Enter a number to square : ");
	scanf("%d",&x);
	temp = x;
	printf("Before squaring : %d.\n",x);
	square(&x);
	printf("Square of %d is %d.\n",temp,x);
	
	return 0;
}

void square(int *px)
{
	*px = (*px) * (*px);
}


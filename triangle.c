#include <stdio.h>
int main()
{
	double height = 15.3 ,width = 32.3 , perimeter = 0.0 , area = 0.0; 
	perimeter = 2.0 * (height + width);
	area = width * height;
	printf("Perimeter =  %f\n",perimeter);
	printf("area = %f\n",area);
	return 0;
}

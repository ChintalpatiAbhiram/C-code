#include <stdio.h>
int main()
{
	int minutes; 
	double minutes_in_year = 0.0,years = 0.0,days = 0.0;
	printf("Number of minutes : ");
	
	//Taking input from user
	scanf("%d", &minutes);
	
	//Calculating minutes in year and get value of years and days
	minutes_in_year = (60 * 24 * 365);
	years = (minutes / minutes_in_year);
	days = minutes / (60 * 24);
	
	//Printing number of years and days in the given minutes
	printf("years : %0.2f\n", years);
	printf("days : %0.2f\n", days);
	return 0;
}


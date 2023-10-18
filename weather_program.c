#include <stdio.h>
#include <stdlib.h>
#define rows 5
#define columns 12
int main()
{
	int i,j,y;
	float sum,average,m,rainfall[rows][columns];
	for(i = 1;i <= rows;++i)
	{
		printf("Year : ");
		scanf("%d",&y);
		for(j = 1;j <= columns;++j)
		{
			switch(j){
				case 1 :
					system("clear");
					printf("January rainfall : ");
					break;
				case 2 :
					system("clear");
					printf("February rainfall : ");
					break;
				case 3 :
					system("clear");
					printf("March rainfall : ");
					break;
				case 4 :
					system("clear");
					printf("April rainfall : ");
					break;
				case 5 :
					system("clear");
					printf("May rainfall : ");
					break;
				case 6 :
					system("clear");
					printf("June rainfall : ");
					break;
				case 7 :
					system("clear");
					printf("July rainfall : ");
					break;
				case 8 :
					system("clear");
					printf("August rainfall : ");
					break;
				case 9 :system("clear");
					printf("September rainfall : ");
					break;
				case 10 :
					system("clear");
					printf("October rainfall : ");
					break;
				case 11 :
					system("clear");
					printf("November rainfall : ");
					break;
				case 12 :
					system("clear");
					printf("December rainfall : ");
					break;

			}
			scanf("%f",&m);
			rainfall[i][j] = m;
		}
		j = 0;
		printf("\n");
	}

	for ( i = 1 ; i <= 5 ; ++i)
	{
		for ( j = 1; j <= 12; ++j)
		{
			sum += rainfall[i][j];
		}
		j = 0;
		printf("\n");
		average = sum/12;
		printf("For year %d , the monthly rainfall average is %.2f\n",2009 + i,average);
		sum = 0,average = 0;

	}
	return 0;
}


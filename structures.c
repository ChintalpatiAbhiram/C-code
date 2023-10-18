#include <stdio.h>
#include <stdlib.h>

struct
{
	char name[50];
	char hireDate[15];
	float salary;
}employee;

int main()
{
	int i = 1;
	while (i != 0)
	{

		// Taking employee details and storing in struct
		printf("Employee %d name : ",i);
		scanf("%s", &employee.name);
		printf("Employee %d hire date : ",i);
		scanf("%s", &employee.hireDate);
		printf("Employee %d salary : ",i);
		scanf("%f", &employee.salary);

		// Printing employee details
		printf("\n");
		printf("Employee %d details are : \n",i);
		printf("Employee %d name : %s.\n",i,employee.name);
		printf("Employee %d hire date : %s.\n",i,employee.hireDate);
		printf("Employee %d salary : %.2f.\n",i,employee.salary);
		printf("\n");

		// If more data is to be entered
		printf("Do you want to add more employee data? (0/1)\n");
		scanf("%d",&i);
		if (i == 0)
		{
			printf("Thank you\n");
			break;
		}
		i++;
	}

	return 0;
}       


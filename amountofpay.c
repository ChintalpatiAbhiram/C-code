#include <stdio.h>
int main() 
{
	int pay = 12,time,gross_pay = 0,net_pay = 0,tax = 0;
	//Taking input from user
	printf("Number of hours worked : ");
	scanf("%d",&time);

	//Checking if user worked overtime
	if (time > 40)
	{
		gross_pay = (pay * 40) + (time - 40) * 18;
	}
	else
	{	
		gross_pay = time * pay;
	}
	
	
	//Taxes
	if (gross_pay > 450){
		tax = (0.15 * 300) + (0.20 * 150) + (0.25 * (gross_pay - 450));
	}
	else
		if (gross_pay > 300 && gross_pay <= 450){
			tax = (0.15 * 300) + (0.20 * (gross_pay - 300));
		}
		else 
			if (gross_pay <= 300) {
				tax = (0.15 * 300);
			}
			else 
				tax = 0;


	//Calculating gross pay
	printf("gross pay is %d\n",gross_pay);
	printf("tax is %d\n",tax);
	net_pay = gross_pay - tax;
	printf("The user makes $%d\n",net_pay);
	return 0;

}

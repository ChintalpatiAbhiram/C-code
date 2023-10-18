#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n,tries = 5,favnumber;
	time_t t;

	srand((unsigned) time(&t));

	favnumber = rand() % 21;

	printf("\nThis is a guessing game.\n");
	printf("I have chosen a number between 0 and 20 which you must guess.\n");
	while (tries != 0) {
		printf("You have %d tries left\n",tries);
		printf("Enter a guess : ");
		scanf("%d",&n);
		if (n > 20){
			printf("Please enter a number between 0 and 20.\n");
			continue;
			} 
		else if(n < favnumber){
			printf("Sorry, %d is wrong.My number is higher than that.\n",n);
			tries--;
			continue;
			}
		else if(n > favnumber){
			printf("Sorry, %d is wrong.My number is lower than that.\n",n);
			tries--;
			continue;
			}
		else if(n == favnumber){
			printf("Congratulations. You guessed it!\n");
			break;
			}
		}
	if(tries == 0){
		printf("Sorry,You ran out of chances.\n");
	}
} 

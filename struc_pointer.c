#include <stdio.h>
#include <stdlib.h>

// Structure for storing item data
struct item
{
	char *itemName;
	int quantity;
	float price;
	float amount;
};

// Function to read item data
void readItem (struct item *pitem)
{
	printf("Item name : ");
	scanf("%s", pitem->itemName);

	printf("Quantity of item : ");
	scanf("%d", &pitem->quantity);

	printf("Price : ");
	scanf("%f", &pitem->price);

	pitem->amount = (float) pitem->quantity * pitem->price;
}

// Function to print item data
void printItem (struct item *pitem)
{
	printf("\n");
	printf("Item name is %s.\n",pitem->itemName);
	printf("Item Quantity : %d.\n",pitem->quantity);
	printf("Price : %.2f.\n",pitem->price);
	printf("Amount : %.2f.\n",pitem->amount);
}

int main()
{
	struct item *pitem;

	pitem->itemName =(char *) malloc(30 * sizeof(char));
	
	if(pitem == NULL)
	{
		printf("Malloc error\n");
		return 0;
	}

	readItem(pitem);
	printItem(pitem);
	
	free (pitem->itemName);

	return 0;
}


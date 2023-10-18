#include <stdio.h>
#include <stdlib.h>

char arr[3][3] = {
		 {'1','2','3'},
		 {'4','5','6'},
		 {'7','8','9'}
		 };
void DrawBoard();
int WinOrLose();
int CheckBoard(int x,char c);

int main(){
	
	int player = 1,move = 0;
	char chance;

	do {
		DrawBoard();

		player = player == 2 ? 2 : 1;
		printf("Player %d move : ",player);
		scanf("%d",&move);
		if (player == 1)
		{
			chance = 'O';
			CheckBoard(move,chance);
		}
		if (player == 2)
		{
			chance = 'X';
			CheckBoard(move,chance);
		}
		player += 1;
	} while(WinOrLose() == 0);
	

	if (WinOrLose() == -1)
	{
		DrawBoard();
		printf("The match is a tie\n");
	}
	

	if (WinOrLose() == 1)
	{
		DrawBoard();
		printf("Player %d has won.\n",player - 1);
	}


	return 0;
}

void DrawBoard(){
	system("clear");

	printf("\n\n\tTic Tac Toe\n\n");
	printf("Player 1 (O) - Player 2 (X)\n\n\n");

	int i,j;
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("%c ",arr[i][j]);
		}
		j = 0;
		printf("\n");
	}
}

int WinOrLose()
{
	int returnValue;
	if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2])
	{
		returnValue = 1;
	}
	else if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2])
	{
		returnValue = 1;
	}
	else if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2])
	{
		returnValue = 1;
	}
	else if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
	{
		returnValue = 1;
	}
	else if (arr[0][2] == arr[1][1] && arr[2][0] == arr[1][1])
	{
		returnValue = 1;
	}
	else if (arr[0][0] != '1' && arr[0][1] != '2' && arr[0][2] != '3' && arr[1][0] == '4' && arr[1][1] == '5' && arr[1][2] == '6' && arr[2][0] != '7' && arr[2][1] != '8' && arr[2][2] !='9')
	{
		returnValue = -1;
	}
	else 
		returnValue = 0;
	return returnValue;
}

int CheckBoard(int x,char c)
{
	switch (x) 
	{
		case 1 :
			arr[0][0] = c;
			break;
		case 2 :
			arr[0][1] = c;
			break;
		case 3 :
			arr[0][2] = c;
			break;
		case 4 :
			arr[1][0] = c;
			break;
		case 5 :
			arr[1][1] = c;
			break;
		case 6 :
			arr[1][2] = c;
			break;
		case 7 :
			arr[2][0] = c;
			break;
		case 8 :
			arr[2][1] = c;
			break;
		case 9 :
			arr[2][2] = c;
			break;
		default :
			printf("Type a proper number\n");
			break;
	}
}


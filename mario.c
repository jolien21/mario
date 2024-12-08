//include libraries
	#include<stdio.h>
	#include<math.h>

//functies oproepedjn
	void print_row(int brick, int spaces, int spaces2);


//Programma
int main(void)
{
	//variables declareren
	int row;	
	
	//getal vragen
	printf("Please enter a number: ");
	while (scanf("%d", &row) != 1 || row <= 0) //check if input is correct
		{
			printf("Invalid input.\nPlease enter a positive number: ");
			int c = getchar(); // clear error state
			while (c != '\n')
			{
				c = getchar();
			}
		}
	printf("Valid input.\nCreating piramid... \n");

	// print piramide van die hoogte
		for (int i = 0; i < row; i++)
		{ 
			print_row(i-row, i+1, row);
		}	
}

//functie om rij te printen
	void print_row(int spaces, int bricks, int spaces2)
	{
		for (int i = 0; i > spaces; i--)
		{
			printf(" ");
					}		
		for (int i = 0; i < bricks; i++)
		{ 
			printf("#");
		}
		for(int i = 0; i < spaces2; i++)
		{	printf(" ");
		}
		for (int i = 0; i < bricks; i++)
		{
			printf("#");
		}	
		printf("\n");
	}

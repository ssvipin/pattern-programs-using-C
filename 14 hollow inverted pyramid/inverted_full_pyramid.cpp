#include<stdio.h>
#include<conio.h>				// including header files
int main(void)					// main function
{
	int row,col,length;			// declaration of integer type variables i,j,k and length
	printf("enter the length of pattern");			// printing message on output screen
	printf("\n");			// new line escape sequence
	scanf("%d",&length);			// recording user input
	for(row=1; row<=length; row++)			// outer for loop controlling rows
	{
		for(col=1; col <= 2*length-1; col++)
		{
			if((row == 1) or (row == col) or (row+col == 2*length) )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

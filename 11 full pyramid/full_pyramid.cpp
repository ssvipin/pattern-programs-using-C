#include<stdio.h>
#include<conio.h>			// including header files
int main(void)			// main function
{
	int row,col,space,length;				// declaration of integer type variables i,j,length
	printf("enter the length of the pattern");			// printing message on output screen
	printf("\n");			//	 new line escape sequence
	scanf("%d",&length);			// recording user input
	for(row = 1; row <= length; row++)
	{
		for(space = 1; space <=(length-row); space++)
		{
			printf(" ");
		}
		for(col =1; col <= (2*row-1); col++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
#include<conio.h>			// including header files
int main(void)			// main function
{
	int row,col,space,length;				// declaration of integer type variables i,j,length
	printf("enter the length of the pattern");			// printing message on output screen
	printf("\n");			//	 new line escape sequence
	scanf("%d",&length);			// recording user input
	for(row=1; row<=length; row++)
	{
		for(col=1; col<=2*length-1; col++)
		{
			if((row == length) or (row+col == length+1) or (col == length+row-1))
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

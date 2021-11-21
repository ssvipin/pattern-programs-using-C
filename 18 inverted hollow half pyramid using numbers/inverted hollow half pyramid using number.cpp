#include<stdio.h>				// including header files
#include<conio.h>
int main(void)				// main function
{
	int row,col,length;					// declaration of integer type variables i,j and length
	printf("enter the length of the pattern");			// printing message on output screen for length
	scanf("%d",&length);							// recording the user's input length in length variable
	printf("\n");					// new line escape sequence
	for(row =1 ; row <= length; row++)
	{
		for(col = 1; col <= length; col++)
		{
			if((col == 1) or (row == 1) or (row+col == length+1))
			{
				printf("%d",col);
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

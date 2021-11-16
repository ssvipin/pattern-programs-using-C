#include<stdio.h>
#include<conio.h>			// including header files
int main(void)				// main function
{
	int length,i,j;			// declaration of integer type variables i,j and length
	printf("enter the length of pattern");			// printing message on output screen
	printf("\n");			// new line escape sequence
	scanf("%d",&length);			// recording user input
	for(i=1; i<=length; i++)			// outer for loop controlling rows
	{
		for(j=1; j<=length; j++)			// inner for loop controlling columns
		{
			if(j>=i)
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

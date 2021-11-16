#include<stdio.h>
#include<conio.h>			// including header files
int main(void)				// main function
{
	int length,i,j;			// declaration of integer type variables i,j and length
	printf("enter the length of pattern");			// printing message on output screen
	printf("\n");			// new line escape sequence
	scanf("%d",&length);			// recording user input
	for(i=1; i<=length; i++)			// outer for loop controlling
	{
		for(j=i; j<=length; j++)			// inner for loop controlling columns
		{
			printf("*");
		}
		printf("\n");					// new line escape sequence
	}
	return 0;
}

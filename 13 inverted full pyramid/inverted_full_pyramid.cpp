#include<stdio.h>
#include<conio.h>				// including header files
int main(void)					// main function
{
	int i,j,k,length;			// declaration of integer type variables i,j,k and length
	printf("enter the length of pattern");			// printing message on output screen
	printf("\n");			// new line escape sequence
	scanf("%d",&length);			// recording user input
	for(i=1; i<=length; i++)		// outer for loop controlling rows
	{
		for(k = 1; k<=i-1; k++)		// inner for loop controlling space
		{
			printf(" ");
		}
		for(j=1; j<=2*(length-i)+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

#include<conio.h>
#include<stdio.h>				// including header files for library functions
int main(void)			// main function
{
	int i,j,length;			// declaration of integer type variables i,j and length
	printf("enter the length of the pattern");			// printing a message on output screen
	printf("\n");											// new line escape sequence
	scanf("%d",&length);
	for(i=1; i<=length; i++)					// outer for loop controlling rows
	{
		for(j=1; j<=length; j++)				// inner for loop controlling columns
		{
			if((i==1) or (j==1) or (i+j == length+1))
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

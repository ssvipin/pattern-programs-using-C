#include<stdio.h>				// including header files
#include<conio.h>
int main(void)				// main function
{
	int i,j,k,length;					// declaration of integer type variables i,j and length
	printf("enter the length of the pattern");			// printing message on output screen for length
	scanf("%d",&length);							// recording the user's input length in length variable
	printf("\n");					// new line escape sequence
	for(i=1; i<=length; i++)			// outer for loop for controlling rows
	{
		for(j=1; j<=i; j++)
		{
			printf("%d \t",j);
		}
		printf("\n");
	}	
	return 0;
}

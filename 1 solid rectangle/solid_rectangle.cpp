#include<stdio.h>				// including header files for library function
#include<conio.h>
int main()						// main function
{
	int i,j,length,width;			// declaration of integer type variables like i,j,length and width
	printf("enter the length of the pattern");
	scanf("%d",&length);
	printf("\n");				// new line escape sequence
	printf("enter the width of the pattern");
	scanf("%d",&width);
	for(i=1; i<=length; i++)			// outer for loop controlling the rows
	{
		for(j=1; j<=width; j++)				// inner for loop controlling the columns
		{
			printf("*");					// required value of our pattern
		}
		printf("\n");
	}
	return 0;
}

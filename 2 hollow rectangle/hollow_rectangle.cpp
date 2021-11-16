#include<conio.h>			// including header files for library function
#include<stdio.h>
int main(void)					// main function
{	
	int i,j,length,width;			// declaration of integer type variable i,j,length,width
	printf("enter the length of the pattern");				
	scanf("%d",&length);			// recording the user's length input in length variable
	printf("\n");						// new line escape sequence
	printf("enter the width of the pattern");
	scanf("%d",&width);							// recording user's width input in width variable
	for(i=1; i<=length; i++)				// outer for loop controlling rows
	{
		for(j=1; j<=width; j++)				// inner for loop controlling columns
		{
			if((i==length) or (i==1) or (j==1) or (j==width) )
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

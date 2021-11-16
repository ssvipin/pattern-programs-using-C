#include<stdio.h>
#include<conio.h>			// including header files for library function	
int main(void)				// main function
{
	int length,i,j;			// declaration of integer type variable i,j and length
	printf("enter the length of pattern");		
	printf("\n");					// new line escape sequence		
	scanf("%d",&length);	
	for(i=1; i<=length; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(j==1)
			{
				printf("*");
			}
			else if (i==j)
			{
				printf("*");
			}
			else if (i==length)
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

#include<stdio.h>
#include<conio.h>			// including header files for library function	
int main(void)				// main function
{
	int length,i,j;			// declaration of integer type variable i,j and length
	printf("enter the length of pattern");		
	printf("\n");					// new line escape sequence		
	scanf("%d",&length);	
	for(i=1; i<=length; i++)			// outer for lo0p controlling rows	
	{
		for(j=1; j<=i; j++)				// inner for loop controlling column
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;			
}

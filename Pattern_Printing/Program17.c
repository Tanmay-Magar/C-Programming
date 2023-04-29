// Pattern Printing
/*
	Input 	: 	Rows = 4, Column = 4;

	Output	:	
	$	*	*	*
	*	$ 	*	*
	*	*	$	*
	*	*	*	$
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0, j = 0;

	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			if(i == j)
			{
				printf("$\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
	
}

int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Entre number if rows : \n");
	scanf("%d",&iValue1);

	printf("Entre number of columns : \n");
	scanf("%d",&iValue2);

	Display(iValue1, iValue2);

	return 0;
}
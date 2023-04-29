// Pattern Printing
/*
input		Row 4 , Column 4

output	*	*	*	*
		*	*	*	*
		*	*	*	*
		*	*	*	*
*/

#include<stdio.h>

void Display(int iRow, int iColumn)		
{
	int i = 0, j = 0;

	if(iRow < 0)
	{
		iRow = -iRow;
	}

	if(iColumn < 0)
	{
		iColumn = -iColumn;
	}

	for(i = 1; i <= iRow; i++)		
	{
		for(j = 1; j <= iColumn; j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Entre Number of Rows :\n");
	scanf("%d",&iValue1);

	printf("Entre Number of Columns :\n");
	scanf("%d",&iValue2);

	Display(iValue1,iValue2);

	return 0;
}
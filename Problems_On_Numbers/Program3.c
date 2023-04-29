//Accept N numbers form user and count and display even and odd numbers

#include<stdio.h>
#include<stdlib.h>

void CountEvenOdd(int *Arr, int iSize)
{
	int iCnt = 0, iCntEven = 0, iCntOdd = 0;

	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if((Arr[iCnt])%2 == 0)
		{
			iCntEven++;
		}
		else
		{
			iCntOdd++;
		}

	}

	printf("Total even numbers are : %d\n",iCntEven);
	printf("Total odd numbers are : %d\n",iCntOdd);
	printf("Total odd numbers are : %d\n",iSize - iCntEven);
}

int main()
{
	int iLength = 0;
	int *ptr = NULL;
	int i = 0;

	printf("How many elements you want to check\n");
	scanf("%d",&iLength);

	ptr = (int *)malloc(iLength * sizeof(int));

	printf("Entre elements :\n");
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}

	CountEvenOdd(ptr,iLength);
	
	free(ptr);

	return 0;
}
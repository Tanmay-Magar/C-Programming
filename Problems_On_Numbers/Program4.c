//Accept N numbers form user and count and perform sum of even elements and odd elements

#include<stdio.h>
#include<stdlib.h>

void EvenOddSum(int *Arr, int iSize)
{
	int iCnt = 0, iCntEven = 0, iCntOdd = 0, iSumEven = 0, iSumOdd = 0;

	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if((Arr[iCnt])%2 == 0)
		{
			iSumEven = iSumEven + Arr[iCnt];
		}
		else
		{
			iSumOdd = iSumOdd + Arr[iCnt];
		}

	}

	printf("Addition of Even elements are : %d\n",iSumEven);
	printf("Addition of Odd elements are : %d\n",iSumOdd);
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

	EvenOddSum(ptr,iLength);
	
	free(ptr);

	return 0;
}
//Accept N numbers form user and count even numbers

#include<stdio.h>
#include<stdlib.h>

int CountEven(int *Arr, int iSize)
{
	int iCnt = 0, iCntEven = 0;

	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if((Arr[iCnt])%2 == 0)
		{
			iCntEven++;
		}

	}
	return iCntEven;
}

int main()
{
	int iLength = 0;
	int *ptr = NULL;
	int i = 0;
	int iRet = 0;

	printf("How many elements you want to check\n");
	scanf("%d",&iLength);

	ptr = (int *)malloc(iLength * sizeof(int));

	printf("Entre elements :\n");
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}

	iRet = CountEven(ptr,iLength);
	printf("There are total %d even numbers from given numbers",iRet);

	free(ptr);

	return 0;
}
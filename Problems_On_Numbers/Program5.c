//Accept N numbers form user and one another number and check the frequency of that number in array

#include<stdio.h>
#include<stdlib.h>

int CheckFrequency(int *Arr, int iSize, int iNo)
{
	int iCnt = 0, iCntFreq = 0;

	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iCntFreq++;
		}
	}

	return iCntFreq;
}

int main()
{
	int iLength = 0;
	int *ptr = NULL;
	int i = 0;
	int iValue = 0;
	int iRet = 0;

	printf("How many elements you want to check\n");
	scanf("%d",&iLength);

	ptr = (int *)malloc(iLength * sizeof(int));

	printf("Entre elements :\n");
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}

	printf("Entre number you want to check the frequency :");
	scanf("%d",&iValue);

	iRet = CheckFrequency(ptr,iLength,iValue);
	printf("%d Appeared %d times in given elements\n",iValue,iRet);
	
	free(ptr);

	return 0;
}
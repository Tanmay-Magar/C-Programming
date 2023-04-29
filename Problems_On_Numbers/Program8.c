//Accept N numbers form user and one another number and return the index at which that number occours for the first time

#include<stdio.h>
#include<stdlib.h>

int CheckOccourence(int *Arr,int iSize,int iNo)
{
	int iCnt = 0;

	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}

	if(iCnt == iSize)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}

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

	printf("Entre number you want to check the occourence :");
	scanf("%d",&iValue);

	iRet = CheckOccourence(ptr,iLength,iValue);
	
	printf("%d Occoured in array at index %d",iValue,iRet);

	free(ptr);

	return 0;
}
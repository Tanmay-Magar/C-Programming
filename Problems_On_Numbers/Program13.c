//Accept N numbers form user and one another number and display last occourence of that number

#include<stdio.h>
#include<stdlib.h>

int LastOccourence(int *Arr, int iSize, int iNo)
{
	int iCnt = 0, iPos = -1;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iPos = iCnt;
		}
	}

	return iPos;
}

int main()
{
	int *ptr = NULL;
	int iLength = 0, i = 0,iValue = 0, iRet = 0 ;

	printf("How many elements you want to entre : \n");
	scanf("%d",&iLength);

	ptr = (int *)malloc(iLength * sizeof(int));

	printf("Entre elemets : \n");
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
	} 

	printf("Entre number you want to check\n");
	scanf("%d",&iValue);

	iRet = LastOccourence(ptr, iLength, iValue);

	if(iRet == -1)
	{
		printf("Number is not there\n");
	}
	else
	{
		printf("%d is appeared last time on index : %d",iValue,iRet);
	}

	free(ptr);

	return 0;
}
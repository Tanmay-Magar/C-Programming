//Accept N numbers form user and one another number and check whether that number is there or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPresence(int *Arr, int iSize, int iNo)
{
	int iCnt = 0;
	bool flag = false;

	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			flag == true;
			break;
		}
	}

	return flag;
}

int main()
{
	int iLength = 0;
	int *ptr = NULL;
	int i = 0;
	int iValue = 0;
	bool bRet = 0;

	printf("How many elements you want to check\n");
	scanf("%d",&iLength);

	ptr = (int *)malloc(iLength * sizeof(int));

	printf("Entre elements :\n");
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}

	printf("Entre number you want to check :");
	scanf("%d",&iValue);

	bRet = CheckPresence(ptr,iLength,iValue);
	
	if(bRet = true)
	{
		printf("%d is there in given elements",iValue);
	}

	else
	{
		printf("%d is not there in given elements",iValue);
	}

	free(ptr);

	return 0;
}
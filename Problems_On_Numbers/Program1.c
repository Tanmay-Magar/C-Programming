//Accept N numbers form user and return its avarage

#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
	int iCnt = 0 , iSum = 0;

	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		iSum = iSum + Arr[iCnt];
	}

	return (iSum/iSize);
}

int main()
{
	int *ptr = NULL;
	int iLength = 0;
	int i = 0;
	float fRet = 0.0f;

	printf("Entre the number of elements : \n");
	scanf("%d",&iLength);

	ptr = (int *)malloc(iLength * sizeof(int));

	printf("Please entre the numbers : \n");
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&ptr[i]); 
	}

	fRet = Average(ptr, iLength);
	printf("Average is : %f\n",fRet);

	free (ptr);
	return 0;
}

//Accept N numbers form user and return smallest number

#include<stdio.h>
#include<stdlib.h>

int Minimum(int *Arr, int iSize)
{
	int iMin = Arr[0];
	int iCnt = 0;

	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(iMin > Arr[iCnt])
		{
			iMin = Arr[iCnt];
		}
	}

	return iMin;
}

int main()
{
	int *ptr = NULL;
	int iLength = 0, i = 0, iRet = 0;

	printf("How many elements you want to entre : \n");
	scanf("%d",&iLength);

	ptr = (int *)malloc(iLength * sizeof(int));

	printf("Entre elemets : \n");
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
	} 

	iRet = Minimum(ptr, iLength);

	printf("Largest number is : %d\n",iRet);

	free(ptr);

	return 0;
}
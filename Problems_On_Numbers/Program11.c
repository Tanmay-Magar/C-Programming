//Accept N numbers form user and display numbers in reverse

#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int *Arr, int iSize)
{
	int iCnt = 0;

	printf("Numbers in reverse order\n");

	for(iCnt = (iSize-1); iCnt >= 0; iCnt--)
	{
		printf("%d\n",Arr[iCnt]);
	}
}

int main()
{
	int *ptr = NULL;
	int iLength = 0, i = 0;

	printf("How many elements you want to entre : \n");
	scanf("%d",&iLength);

	ptr = (int *)malloc(iLength * sizeof(int));

	printf("Entre elemets : \n");
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
	} 

	DisplayReverse(ptr, iLength);

	free(ptr);

	return 0;
}
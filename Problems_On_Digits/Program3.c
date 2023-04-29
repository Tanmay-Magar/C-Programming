// Accept N number from user and count frequency of 2 in it

#include<stdio.h>

int CountTwo(int iNo)
{
	int iDigit = 0;
	int Temp = iNo;
	int iCount = 0;

	if(Temp < 0)
	{
		Temp = -Temp;
	}

	while(Temp != 0)
	{
		iDigit = Temp % 10;

		if(iDigit == 2)
		{
			iCount++;
		}

		Temp = Temp / 10;
	}

	return iCount;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Entre number : \n");
	scanf("%d",&iValue);

	iRet = CountTwo(iValue);

	printf("%d contains %d times two in it.",iValue,iRet);

	return 0;
}
// Accept N number from user and count frequency of 4 in it

#include<stdio.h>

int CountFour(int iNo)
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

		if(iDigit == 4)
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

	iRet = CountFour(iValue);

	printf("%d contains %d times four in it.",iValue,iRet);

	return 0;
}
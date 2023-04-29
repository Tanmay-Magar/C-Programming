// Accept N number from user and count frequency of such a digit which are less than 6

#include<stdio.h>

int BelowSix(int iNo)
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

		if(iDigit < 6)
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

	iRet = BelowSix(iValue);

	printf("The frequency of numbers less than six in %d is : %d",iValue,iRet);

	return 0;
}
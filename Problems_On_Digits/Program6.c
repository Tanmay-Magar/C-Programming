// Accept N number from user and return the count of even digits 

#include<stdio.h>

int EvenDigits(int iNo)
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

		if((iDigit %2) == 0)
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

	iRet = EvenDigits(iValue);

	printf("Total even digits in %d is : %d",iValue,iRet);

	return 0;
}
// Accept N number from user and return the count of odd digits between 3 and 7

#include<stdio.h>

int CountRange(int iNo)
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

		if(iDigit >= 3 && iDigit <= 7)
		{
			if((iDigit % 2) != 0)
			{
				iCount++;	
			}
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

	iRet = CountRange(iValue);

	printf("Total digits in range of 3 to 7 in %d are : %d",iValue,iRet);

	return 0;
}
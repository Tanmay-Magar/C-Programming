// Accept N number from user and return difference between summation of even digits and summation of odd digits

#include<stdio.h>

int CountDiff(int iNo)
{
	int iDigit = 0;
	int Temp = iNo;
	int SumEven = 0;
	int SumOdd = 0;

	if(Temp < 0)
	{
		Temp = -Temp;
	}

	while(Temp != 0)
	{
		iDigit = Temp % 10;

		if((iDigit % 2) == 0)
		{
			SumEven = SumEven + iDigit;
		}
		else
		{
			SumOdd = SumOdd + iDigit;
		}

		Temp = Temp / 10;
	}

	return(SumEven - SumOdd);
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Entre number :\n");
	scanf("%d",&iValue);

	iRet = CountDiff(iValue);

	printf("Difference between summation of even and odd digits is : %d",iRet);

	return 0;
}
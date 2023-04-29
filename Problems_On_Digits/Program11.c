// Accept N number from user and check if number is armstrong or not

#include<stdio.h>
#include<stdbool.h>

bool ChkArmStr(int iNo)
{
	int iDigit = 0;
	int Temp = iNo;
	int iSum = 0;

	if(Temp < 0)
	{
		Temp = -Temp;
	}

	while(Temp != 0)
	{
		iDigit = Temp % 10;

		iSum = iSum + (iDigit * iDigit * iDigit);

		Temp = Temp / 10;
	}

	if(iSum == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bRet = 0;

	printf("Entre number :\n");
	scanf("%d",&iValue);

	bRet = ChkArmStr(iValue);

	if(bRet == true)
	{
		printf("%d is armstrong number...",iValue);
	}
	else
	{
		printf("%d is not an armstrong number...",iValue);
	}
	return 0;
}
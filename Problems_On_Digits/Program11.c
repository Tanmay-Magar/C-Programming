// Accept N number from user and check if number is armstrong or not

#include<stdio.h>
#include<stdbool.h>

bool ChkArmStr(int iNo)
{
    int iDigitCount = 0;
    int iTemp = iNo;
    int iDigit = 0;
    int iCnt = 0;
    int iPower = 1;
    int iSum = 0;

    while(iTemp != 0)
    {
        iDigitCount++;

        iTemp = iTemp / 10;
    }

    iTemp = iNo;

    while(iTemp != 0)
    {
        iDigit = iTemp % 10;

        for(iCnt = 1; iCnt <= iDigitCount; iCnt++)
        {
            iPower = iPower * iDigit;
        }

        iSum = iSum + iPower;

        iPower = 1;

        iTemp = iTemp / 10;
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

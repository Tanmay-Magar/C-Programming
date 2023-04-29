// Accept N number from user and check whether it contains zero in it

#include<stdio.h>
#include<stdbool.h>

bool CheckBool(int iNo)
{
	int iDigit = 0;
	int Temp = iNo;
	bool flag = false;

	if(Temp < 0)
	{
		Temp = -Temp;
	}

	while(Temp != 0)
	{
		iDigit = Temp % 10;

		if(iDigit == 0)
		{
			flag = true;
			break;
		}

		Temp = Temp/10;
	}

	return flag;
}

int main()
{
	int iValue = 0;
	bool bRet = false;

	printf("Entre number : \n");
	scanf("%d",&iValue);

	bRet = CheckBool(iValue);

	if(bRet == true)
	{
		printf("%d contains zero in it.",iValue);
	}
	else
	{
		printf("%d does not contains zero in it.",iValue);
	}

	return 0;
}
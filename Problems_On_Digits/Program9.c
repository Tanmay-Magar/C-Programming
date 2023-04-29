// Accept N number from user and return the multiplication of all digits

#include<stdio.h>

int MultDigit(int iNo)
{
	int iDigit = 0;
	int Temp = iNo;
	int iMult = 1;

	if(Temp < 0)
	{
		Temp = -Temp;
	}
	
	while(Temp != 0)
	{
		iDigit = Temp % 10;

		iMult = iMult * iDigit;

		Temp = Temp / 10;
	}

	return iMult;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Entre number : \n");
	scanf("%d",&iValue);

	iRet = MultDigit(iValue);

	printf("Multiplication of digits in number %d are : %d",iValue,iRet);

	return 0;
}
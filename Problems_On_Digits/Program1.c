// Accept N number from user and display its digits in reverse

#include<stdio.h>

void DisplayDigitRev(int iNo)
{
	int iDigit = 0;
	int Temp = iNo;

	if(Temp < 0)
	{
		Temp = -Temp;
	}

	while(Temp != 0)
	{
		iDigit = Temp % 10;

		printf("%d\t",iDigit);

		Temp = Temp/10;
	}
}

int main()
{
	int iValue = 0;

	printf("Entre number : \n");
	scanf("%d",&iValue);

	DisplayDigitRev(iValue);

	return 0;
}

//Accept string from user and count the Capital letters in it.


#include<stdio.h>

int CountCapital(char *str)
{
	int iCnt = 0;

	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char *Arr[20];
	int iRet = 0;

	printf("Entre string :\n");
	scanf("%[^'\n']s",Arr);

	iRet = CountCapital(Arr);

	printf("Frequency of capital letters : %d\n",iRet);

	return 0;
}
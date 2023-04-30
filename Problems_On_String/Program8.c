// Accept string from user and display frequency of 'a' as well as 'A'.

#include<stdio.h>

int CountCh(char *str)
{
	int iCnt = 0;

	while(*str != '\0')
	{
		if((*str == 'a') || (*str == 'A'))
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

	iRet = CountCh(Arr);

	printf("Frequency of a is : %d\n",iRet);

	return 0;
}
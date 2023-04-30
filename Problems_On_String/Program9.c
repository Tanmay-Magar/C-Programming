// Accept string from user and count the small case letters in it.


#include<stdio.h>

int CountSmall(char *str)
{
	int iCnt = 0;

	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
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

	iRet = CountSmall(Arr);

	printf("Frequency of small letters : %d\n",iRet);

	return 0;
}
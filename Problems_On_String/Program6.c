//Accept full name from user and display its length on screen

#include<stdio.h>

int strlenX(char *str)
{
	int iCnt = 0;
	int i = 0;

	while(str[i] != '\0')
	{
		iCnt++;
		i++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;

	printf("Entre string :\n");
	scanf("%[^'\n']s",Arr);

	iRet = strlenX(Arr);
	printf("Length of string is : %d\n",iRet);

	return 0;
}
// Accept string from user and count white spaces (' ')

#include<stdio.h>

int CntSpace(char *str)
{
	int iCount = 0;

	while(*str != '\0')
	{
		if(*str == ' ')
		{
			iCount++;
		}
		str++;
	}
	return iCount;
}

int main()
{
	char Arr[30];
	int iRet = 0;

	printf("Entre string :\n");
	scanf("%[^'\n']s",Arr);

	iRet = CntSpace(Arr);

	printf("White spaces in the given string is : %d\n",iRet);

	return 0;
}
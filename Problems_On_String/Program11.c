//Accept string from user as well as accept one character and count frequency of that character

#include<stdio.h>

int CountFrequency(char *str, char ch)
{
	int iCnt = 0;

	while(*str != '\0')
	{
		if(*str == ch)
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
	char ch = 'a';
	int iRet = 0;

	printf("Entre string :\n");
	scanf("%[^'\n']s",Arr);

	iRet = CountFrequency(Arr,ch);

	printf("Frequency of letter %c is : %d\n",ch, iRet);

	return 0;
}
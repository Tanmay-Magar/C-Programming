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
	char cValue = '\0';
	int iRet = 0;

	printf("Entre string :\n");
	scanf("%[^'\n']s",Arr);

	
	
	printf("Entre character to check Frequency :\n");
	scanf("%c",&cValue);

	iRet = CountFrequency(Arr,cValue);

	printf("Frequency of letter %c is : %d\n",cValue, iRet);

	return 0;
}
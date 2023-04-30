// Accept a character from user and convert to lower letters into small letters inplace (same string)

#include<stdio.h>

char ToLowerX(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
	{
		return(ch + 32);
	}
	else
	{
		return ch;
	}
}

int main()
{
	char cValue = '\0';
	char cRet = '\0';

	printf("Entre character : \n");
	scanf("%c",&cValue);

	cRet = ToLowerX(cValue);

	printf("%c in lower case is %c",cValue, cRet);

	return 0;
}
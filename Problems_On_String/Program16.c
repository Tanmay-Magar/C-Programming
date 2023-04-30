//Accept a character from user and convert capital letters into small letters inplace (same string)

#include<stdio.h>

char ToUpperX(char ch)
{
	return(ch - 32);
}

int main()
{
	char cValue = '\0';
	char cRet = '\0';

	printf("Entre character : \n");
	scanf("%c",&cValue);

	cRet = ToUpperX(cValue);

	printf("%c in upper case is %c",cValue, cRet);

	return 0;
}
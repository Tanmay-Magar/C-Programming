// Accept a character from user and toggle it

#include<stdio.h>

char CharToggle(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
	{
		return(ch + 32);
	}
	
	else if(ch >= 'a' && ch <= 'z')
	{
		return (ch - 32);
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

	cRet = CharToggle(cValue);

	printf("Toggle character is %c",cRet);

	return 0;
}
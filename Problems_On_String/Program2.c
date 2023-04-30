// Accept the character from user and check if it is capital or not
/* 
Input	:	
Output	:
*/

#include<stdio.h>
#include<stdbool.h>

bool IsCapitalX(char ch)
{
	if((ch >= 'A') && (ch <= 'Z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char cValue = '\0';
	bool bRet = false;

	printf("Please entre one character\n");
	scanf("%c",&cValue);

	bRet = IsCapitalX(cValue);

	if(bRet == true)
	{
		printf("%c is a Capital letter\n",cValue);
	}
	else
	{
		printf("%c is not a Capital letter\n",cValue);	
	}

	return 0;
}
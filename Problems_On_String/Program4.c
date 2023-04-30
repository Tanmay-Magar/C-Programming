//// Accept the character from user and check if it is digit or not using ASCII value
/* 
Input	:	
Output	:
*/

#include<stdio.h>
#include<stdbool.h>

bool IsDigit(char ch)
{
	if((ch >= 48) && (ch <= 57))	// Using ASCII value
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

	printf("Please entre one number\n");
	scanf("%c",&cValue);

	bRet = IsDigit(cValue);

	if(bRet == true)
	{
		printf("%c is a Digit\n",cValue);
	}
	else
	{
		printf("%c is not a Digit\n",cValue);	
	}

	return 0;
}
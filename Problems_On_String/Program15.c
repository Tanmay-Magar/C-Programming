//Accept string from user as well as accept one character and check whether the character is avaliable in it or not

#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == ch)
		{
			break;
		}
		str++;
	}
	
	if(*str == '\0')
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	char *Arr[20];
	char cValue = '\0';
	bool bRet = false;

	printf("Entre string :\n");
	scanf("%[^'\n']s",Arr);	
	
	printf("Entre character to check Frequency :\n");
	scanf(" %c",&cValue);	// added space before %c 

	bRet = Check(Arr,cValue);

	if(bRet == true)
	{
		printf("%c is avaliable in %s",cValue,Arr);
	}
	else
	{
		printf("%c is not avaliable in %s",cValue,Arr);
	}

	return 0;
}
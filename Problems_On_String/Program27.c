/*
Accept string from user and copy that string into another 
string while converting small character into capital letters
*/

#include<stdio.h>

void strcpyCapX(char *src, char *dest)
{
	while(*src != '\0')
	{
		if(*src >= 'a' && *src <= 'z')
		{
			*dest = *src - 32;
		}
		else
		{
			*dest = *src;
		}

		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[30];
	char Brr[30];
	
	printf("Entre string :\n");
	scanf("%[^'\n']s",Arr);

	strcpyCapX(Arr, Brr);

	printf("Original string is : %s\n",Arr);
	printf("Copid string is : %s\n",Brr);

	return 0;
}
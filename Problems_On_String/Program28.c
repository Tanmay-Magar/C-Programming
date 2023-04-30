/*
Accept string from user and copy that string into another 
string while converting capital character into small letters
*/

#include<stdio.h>

void strcpySmallX(char *src, char *dest)
{
	while(*src != '\0')
	{
		if(*src >= 'A' && *src <= 'Z')
		{
			*dest = *src + 32;
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

	strcpySmallX(Arr, Brr);

	printf("Original string is : %s\n",Arr);
	printf("Copid string is : %s\n",Brr);

	return 0;
}
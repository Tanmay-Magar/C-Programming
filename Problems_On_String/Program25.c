// Accept string from user and copy that string into another string

#include<stdio.h>

void strcpyX(char *src, char *dest)
{
	while(*src != '\0')
	{
		*dest = *src;

		src++;
		dest++;
	}
	*dest = *src;
}

int main()
{
	char Arr[30];
	char Brr[30];
	
	printf("Entre string :\n");
	scanf("%[^'\n']s",Arr);

	strcpyX(Arr, Brr);		

	printf("Copid string is : %s\n",Brr);

	return 0;
}
// Accept string from user and lower it inplace

#include<stdio.h>

void strlwrX(char *str)
{
	while(*str != '\0')
	{
		if(*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
}

int main()
{
	char Arr[30];

	printf("Entre string :\n");
	scanf("%[^'\n']s",Arr);

	strlwrX(Arr);

	printf("String after conversion is : %s\n",Arr);

	return 0;
}
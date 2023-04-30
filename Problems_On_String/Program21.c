// Accept string from user and upper it inplace 

#include<stdio.h>

void struprX(char *str)
{
	while(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	char Arr[30];

	printf("Entre string :\n");
	scanf("%[^'\n']s",Arr);

	struprX(Arr);

	printf("String after conversion is : %s\n",Arr);

	return 0;
}
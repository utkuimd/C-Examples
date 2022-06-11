#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char arr[100];
	int i=0,a=0,b=0,c=0;
	printf("Enter a sentence\n");
	gets(arr);
	while(arr[i]!='\0')
	{
		if(isalpha(arr[i])!=0)
		{
			a++;
		}
		else if(isdigit(arr[i])!=0)
		{
			b++;
		}
		else if(isspace(arr[i])!=0)
		{
			c++;
		}
		i++;
	}
	printf("letters=%d\n",a);
	printf("digits=%d\n",b);
	printf("space=%d\n",c);
	
	return 0;
}

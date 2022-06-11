#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char arr[50]={"Hello C programming language "};
	char newarr[50];
	int i=0,j=0,x=0,kontrol=0;
	for(i=0;i<strlen(arr);i++)
	{
		if(isspace(arr[i])!=0)
		{
			kontrol++;
			if(kontrol%2==1)
			{
				while(j<i)
				{
					newarr[j]=arr[i-x-1];
					j++;
					x++;
				}		
			}
			else
			{
				while(j<=i)
				{
					newarr[j]=arr[j];
					j++;
				}		
			}
			x=0;
		}
	}
	puts(newarr);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char arr[50]=" my name is utku";
	char newarr[50];
	int c=0,i=0,size;
	for(size=strlen(arr);size>=0;size--)
	{
		if(isspace(arr[size])!=0)
		{
			while(isalpha(arr[size+i+1])!=0)
			{
				newarr[c]=arr[size+i+1];
				printf("%c",newarr[c]);
				c++;
				i++;
			}
			printf(" ");
			i=0;
		}
	}
	return 0;
}

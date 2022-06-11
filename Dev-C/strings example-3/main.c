#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,k,c,cs;
	char s[50]="my name is utku";
	char arr[5];
	k=0;
	puts(s);
	for(i=0;i<strlen(s);i++)
	{
		if(isspace(s[i])!=0)
		{
			arr[k]=i;
			k++;
		}
	}
	c=strlen(arr);cs=strlen(s);
	while(c>=0)
	{
		for(k=arr[c-1];k<cs;k++)
		{printf("%c",s[k]);}
			cs=arr[c-1];
			c--;
			if(c==0)
			printf(" ");

	}
	return 0;
}

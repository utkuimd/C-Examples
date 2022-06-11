#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void FindStr(char arrx[]);
int main(int argc, char *argv[]) {
	char arr[100];
	printf("Enter a sentence\n");
	gets(arr);
	FindStr(arr);
	return 0;
}
void FindStr(char *pointer)
{
	int i=0;
	while(*(pointer+i)!='\0')
	{
		i++;
	}
	printf("The length of %s=%d",pointer,i);
}

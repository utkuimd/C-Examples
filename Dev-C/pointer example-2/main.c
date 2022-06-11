#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void rev(char *pointer);

int main(int argc, char *argv[]) {
	
	char arr[50];	
	
	gets(arr);		

	rev(arr);
	
	printf("%s",arr);

	return 0;
}
void rev(char *pointer)
{
	char newarr[100];
	int i=0;
	int size=strlen(pointer);
	while(i<size)
	{
		newarr[i]=*(pointer+size-i-1);
		i++;
	}
	i=0;
	while(i<size)
	{
		*(pointer+i)=newarr[i];
		i++;
	}
}

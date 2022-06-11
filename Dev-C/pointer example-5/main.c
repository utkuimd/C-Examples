#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void reverse(char *pointer);
int main(int argc, char *argv[]) {
	char arr[50];
	printf("write about something logically=");scanf("%s",arr);
	reverse(arr);
	printf("read about something logically=%s",arr);
	return 0;
}
void reverse(char *pointer)
{
	int size,i,j,temp;
	size=strlen(pointer);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			temp=*(pointer+j);			//*(pointer+j)==arr[j]
			*(pointer+j)=*(pointer+i);	//*(pointer+i)==arr[i]
			*(pointer+i)=temp;			
		}
	}
}

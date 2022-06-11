#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reverse(int *pointer[]);
int main(int argc, char *argv[]) {
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	int *ptrarr[10];
	for(i=0;i<10;i++)
	{
		ptrarr[i]=&arr[i];
	}
	reverse(ptrarr);
	return 0;
}
void reverse(int *pointer[])
{
	int i;
	for(i=9;i>=0;i--)
	{
		printf("%d\t",*pointer[i]);
	}
}

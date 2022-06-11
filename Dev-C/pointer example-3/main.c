#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void deger(int *pointer);
int main(int argc, char *argv[]) {
	int arr[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	deger(arr);
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
void deger(int *pointer)
{
	int newarr[5];
	int i;
	for(i=0;i<5;i++)
	{
		newarr[i]=*(pointer+5-i-1);
	}
	for(i=0;i<5;i++)
	{
		*(pointer+i)=newarr[i];
	}
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void degistir(int *pointera[] , int *pointerb[]);
int main(int argc, char *argv[]) {
	
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[10]={96,85,70,60,50,40,56,87,98,77};
	int i;
	int *ptra[10],*ptrb[10];
	
	for(i=0;i<10;i++)
	{
		ptra[i]=&a[i];
		ptrb[i]=&b[i];
	}
	
	degistir(ptra,ptrb);
	return 0;
}
void degistir(int *pointera[] , int *pointerb[])
{
	int i,temp;
	for(i=0;i<10;i++)
	{
		temp=*pointera[i];
		*pointera[i]=*pointerb[i];
		*pointerb[i]=temp;
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",*pointera[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",*pointerb[i]);
	}
}

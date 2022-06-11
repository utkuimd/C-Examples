#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[10]={96,20,70,60,75,55,85,34,49,13};
	int temp[20],i,j,g;
	for(i=0;i<10;i++)
	{
		temp[i]=a[i];
	}
	for(i=10,j=0;i<20;i++,j++)
	{
		temp[i]=b[j];
	}
	for(i=0;i<20;i++)
	{
		for(j=i+1;j<20;j++)
		{
			if(temp[j]<temp[i])
			{
				g=temp[i];
				temp[i]=temp[j];
				temp[j]=g;
			}
		}
	}
	for(i=0;i<20;i++)
	{
		printf("%d ",temp[i]);
	}
	return 0;
}

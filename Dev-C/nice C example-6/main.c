#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[50],arrx[50];
	int i,x=1,b=0,size,blader;
	printf("size of an array=");scanf("%d",&size);
	printf("enter a size of blader=");scanf("%d",&blader);
	for(i=0;i<size;i++)
	{
		printf("enter a number=");scanf("%d",&arr[i]);
	}
	for(i=1;i<=(size/blader);i++)
	{
		if(i==1||i==5)
		{
			while(x<=blader)
			{
				arrx[b]=arr[b+(blader*2)];
				b++;
				x++;
			}
			x=1;
		}
		else if(i==3||i==7)
		{
			while(x<=blader)
			{
				arrx[b]=arr[b-(blader*2)];
				b++;
				x++;
			}
			x=1;
		}
		else
		{
			while(x<=blader)
			{
				arrx[b]=arr[b];
				b++;
				x++;
			}
			x=1;
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",arrx[i]);
	}
	return 0;
}

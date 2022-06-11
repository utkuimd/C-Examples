#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[100];
	int i,size,fre=1,x=1,a,count=0;
	printf("enter number of elements in array=");scanf("%d",&size);
	printf("enter %d numbers=\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		x=i+1;
		while((x)<size)
		{
			if(arr[i]==arr[x])
			{
				fre++;
			}
			x++;
		}
		
		if(i==0)
		printf("element %d count %d\n",arr[0],fre);
		else
		{
			for(a=0;a<i;a++)
			{
				if(arr[i]==arr[a])
				{
					count++;
				}	
			}
			if(count==0)
			{
				printf("element %d count %d\n",arr[i],fre);
			}	
		}
	count=0;
	fre=1;
	}
	return 0;
}

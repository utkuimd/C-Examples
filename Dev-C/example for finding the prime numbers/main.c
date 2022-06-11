#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[100];
	int i,a,sayac=2,mod=1;
	for(i=0;i<5;i++)
	{
		printf("enter a number=");scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(a=2;a<arr[i];a++)
		{
			mod=arr[i]%a;
			if(mod!=0)
			sayac++;
		}
		if(sayac==a)
		printf("%d asal\n",arr[i]);
		else					
		printf("%d asal degil\n",arr[i]);
		sayac=2;
	}
	return 0;
}

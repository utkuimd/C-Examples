#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main()
{
	int a,num,i=0,asilnum=num;
	int arr[3];
	printf("enter a number=");scanf("%d",&num);
	do
	{
		a=num%10;
		arr[i]=a;
		i++;
		num=num/10;
	}while(num!=0);
	i=0;
	do
	{
		if(arr[i]==arr[i+2])
		{
			printf("%d\n",asilnum);
		}
		i++;
	}while(i<3);
	
	return 0;	
}

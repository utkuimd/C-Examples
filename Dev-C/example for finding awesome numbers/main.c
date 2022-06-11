#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int finding_awesome(int arrx[]);
int main(int argc, char *argv[]) {
	int arr[100];				
	int i=0;
	do
	{
		printf("enter a number=");scanf("%d",&arr[i]);
		i++;
	}while(i<7);
	finding_awesome(arr);
	printf("%d sayisi mukemmeldir",finding_awesome(arr));
return 0;
}
int finding_awesome(int arrx[100])
{
	int x;
	int t=1,sum=0,mod;
	while(x<7)
	{
		while(t<arrx[x])
		{
			mod=arrx[x]%t;
			if(mod==0)
			sum=sum+t;	
		t++;
		}
		t=1;
		if(sum==arrx[x])
		return sum;
	sum=0;
	x++;	
	}
}

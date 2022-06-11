#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,num,bosluk,x,y;
	printf("enter a number=");scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(bosluk=num;bosluk>i;bosluk--)
		{
			printf(" ");
		}
		for(x=1;x<=i;x++)
		{
			printf("%d",x);
			
			if(i==1)
			printf("\n");
			
		
		}
		for(y=1;y<i;y++)
		{
			if(i==1)
			continue;
			else
			printf("%d",y);
		}
		if(i==1)
		continue;
		else
		printf("\n");
	}
	return 0;
}

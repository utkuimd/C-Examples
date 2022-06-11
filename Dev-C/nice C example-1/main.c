#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main()
{
	int x=0,i,bosluk,j,a;
	for(i=0;i<5;i++)
	{
		for(bosluk=5;bosluk>i;bosluk--)
		{
			printf(" ");
		}
		for(j=i;j<=i;j++)
		{
			a=5*(pow(2,x));
			if(i==0)
			printf("0");
			printf("%d",a);
			x++;
		}
		printf("\n");
	}
	return 0;
}

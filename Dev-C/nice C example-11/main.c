#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,sum=0,i=1,a=1,x=1,c=1;
	printf("enter a number for this function=");
	scanf("%d",&num);
	while(i<=num)
	{
		while(x<=i)
		{
			a=a*c;
			c++;
			x++;
		}
		sum=sum+a;
		a=1;
		x=1;
		i++;
	}
	printf("display the result of function = f(%d)=%d",num,sum);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,i=1,sum=0,a=0;
	printf("enter a number=");scanf("%d",&num);
	while(i>0)
	{
		if(num<pow(10,i))
		{
		a=num/pow(10,i-1);
		num=num-(pow(10,i-1)*a);
		sum=sum+a;
		i--;
		}
		else if(num==pow(10,i))
		{
		a=num/pow(10,i);
		sum=sum+a;
		break;
		}
		else
		i++;
	}
	printf("sum of the digits your number=%d",sum);
	
	return 0;
}

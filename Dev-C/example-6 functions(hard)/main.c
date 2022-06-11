#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fact(int x);
int pwrx(int y,int z);
int main(int argc, char *argv[]) {
	int num1,num2,A=0,c=1;
	printf("enter a number=");scanf("%d",&num1);
	printf("enter a number=");scanf("%d",&num2);
while(c<=num2)
	{
		A=A+(pwrx(num1,c)/fact(c));
		c++;
	}
	printf("display the result=%d\n",A);
	return 0;
}
int fact(int x)
{
	int a=1,i=1;
	while(i<=x)
	{
		a=a*i;
		i++;
	}
		return a;
}
int pwrx(int y,int z)
{
	int pwr=1,i=1;
	while(i<=z)
	{
		pwr=pwr*y;
		i++;
		
	}
		return pwr;
}

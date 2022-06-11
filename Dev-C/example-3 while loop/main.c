#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2,a=num1,sum=0;
	printf("enter a number=");scanf("%d",&num1);
	printf("input the number or terms=");scanf("%d",&num2);
	while(a<=pow(10,num2-1))
	{
		a=(a*10)+num1;
		printf("%d",a);
		printf(" ");
		sum=sum+a;
	}
	printf("\n");
	printf("sum of the series=%d",sum);
	return 0;
}

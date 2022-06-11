#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,a,b;
	for(i=100;i<130;i++)
	{
		a=i/100;
		b=i%10;
		if(a==b)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}

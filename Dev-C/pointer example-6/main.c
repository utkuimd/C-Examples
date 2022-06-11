#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fonksiyon(int a,int *b);
int main(int argc, char *argv[]) {
	int m=3,n=5;
	fonksiyon(m,&n);
	printf("%d ,%d\n",m,n);
	return 0;
}
void fonksiyon(int a,int *b)
{
	a=7;
	*b=a;
	b=&a;
	*b=4;
	printf("%d ,%d\n",a,*b);
}


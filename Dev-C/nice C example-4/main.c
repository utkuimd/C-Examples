#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int satir,sutun;
	int i,j;
	printf("satir=");scanf("%d",&satir);
	printf("sutun=");scanf("%d",&sutun);
	for(i=1;i<=satir;i++)
	{
		if(i==1 || i==satir)
		{	
			for(j=0;j<sutun;j++)
			{
				printf("*\t");
			}
		}
		else
		{
			printf("*");
			for(j=0;j<sutun-1;j++)
			{
				printf("\t");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

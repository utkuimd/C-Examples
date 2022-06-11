#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct araba
{
	char model[50];
	int speed;
	int cost;
	int fuel;
};
void descend_araba(struct araba [5]);

int main(int argc, char *argv[]) {
	struct araba arr[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s%d%d%d",arr[i].model,&arr[i].speed,&arr[i].cost,&arr[i].fuel);
	}
	for(i=0;i<5;i++)
	{
		printf("%s %d %d %d\n",arr[i].model,arr[i].speed,arr[i].cost,arr[i].fuel);
	}
	descend_araba(arr);
	return 0;
}
void descend_araba(struct araba arrx[5])
{
	struct araba temp;
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arrx[i].cost>arrx[j].cost)
			{
				temp=arrx[i];
				arrx[i]=arrx[j];
				arrx[j]=temp;
			}	
		}
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%s %d %d %d\n",arrx[i].model,arrx[i].speed,arrx[i].cost,arrx[i].fuel);
	}
}

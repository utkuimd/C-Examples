#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct smallest_distance
{
	int image[5][5];
	int vector[5];
};
int main(int argc, char *argv[]) {
	struct smallest_distance arr[5];
	float smallest=100000000,b;
	double sum=0;
	double a=0;
	int i,j,index=0;
	for(i=0;i<5;i++)
	{
		printf("%d.vector=",i+1);scanf("%d",&arr[i].vector[i]);
		for(j=0;j<5;j++)
		{
			printf("%d.%d.image=",i+1,j+1);scanf("%d",&arr[i].image[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			a=(arr[i].image[i][j]-arr[i].vector[j])*(arr[i].image[i][j]-arr[i].vector[j]);
			sum=sum+a;
		}
		b=(float)sqrt(sum);
		if(b<smallest)
		{
			smallest=b;
			index=i+1;
		}
		sum=0;
		a=0;
	}
	printf("smallest=%.2f,index=%d",smallest,index);
	return 0;
}

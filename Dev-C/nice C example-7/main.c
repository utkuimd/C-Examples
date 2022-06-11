#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct person 
{
	char isim[5][20];
	int no[5][5];
}st_per;

int main(int argc, char *argv[]) {
	int i,j;
	int sum=0;
	float ort=0;
	for(i=0;i<5;i++)
	{
		scanf("%s",st_per.isim[i]);
		for(j=0;j<5;j++)
		{
			scanf("%d",&st_per.no[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%s ",st_per.isim[i]);
		for(j=0;j<5;j++)
		{
			printf("%d ",st_per.no[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			sum=sum+st_per.no[i][j];
		}
		ort=(float)sum/(float)5;
		if(ort>50)
		{
			printf("This person %s has been successful grade %.2f\n",st_per.isim[i],ort);
		}
		else
		{
			printf("This person %s has not been successful grade %.2f\n",st_per.isim[i],ort);
		}
		ort=0;
		sum=0;
	}
	return 0;
}








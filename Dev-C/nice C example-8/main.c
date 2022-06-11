#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student 
{
	char isim[5][20];
	int no[5][5];
};

int main(int argc, char *argv[]) {
	struct student arr[5];
	int i,j;
	int sum=0;
	float ort=0;
	for(i=0;i<5;i++)
	{
		printf("%d.ogrencinin ismi=",i+1);scanf("%s",arr[i].isim[i]);
		for(j=0;j<5;j++)
		{
			printf("%d.ogrencinin %d.notu=",i+1,j+1);scanf("%d",&arr[i].no[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%s ",arr[i].isim[i]);
		for(j=0;j<5;j++)
		{
			printf("%d ",arr[i].no[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			sum=sum+arr[i].no[i][j];
		}
		ort=(float)sum/(float)5;
		if(ort>50)
		{
			printf("This person %s has been successful grade %.2f\n",arr[i].isim[i],ort);
		}
		else
		{
			printf("This person %s has not been successful grade %.2f\n",arr[i].isim[i],ort);
		}
		ort=0;
		sum=0;
	}
	return 0;
}

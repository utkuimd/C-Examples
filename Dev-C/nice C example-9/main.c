#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fonksiyon(int *pointer,int si,int bl);
int main(int argc, char *argv[]) {
	int sinir,blader,i;
	int arr[50];
	printf("sinir=");scanf("%d",&sinir);
	printf("blader=");scanf("%d",&blader);
	for(i=0;i<sinir;i++)
	{
		scanf("%d",&arr[i]);
	}
	fonksiyon(arr,sinir,blader);
	return 0;
}
void fonksiyon(int *pointer,int sini,int blade)
{
	int x=0,y=0,z=0,c=1;
	int sum=0;
	float ort=0;
	while(x<sini/blade)
	{
		while(y<blade*c)
		{
			sum=sum+*(pointer+y);
			y++;
		}
		ort=(float)sum/(float)blade;
		while(z<blade*c)
		{
			if(*(pointer+z)<ort)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
			z++;
		}
		ort=0;
		sum=0;
		x++;
		c++;
	}
}


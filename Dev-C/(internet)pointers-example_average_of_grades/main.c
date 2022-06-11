#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float average(int *pointer[]);
int main(int argc, char *argv[]) {
	int i;
	int arr[5];
	int *ptrarr[5];
	float sonuc;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		ptrarr[i]=&arr[i]; // Pointer assignment was made to the values received from the user.
	}
	sonuc=average(ptrarr);
	printf("%.2f",sonuc);
	return 0;
}
float average(int *pointer[]) // arr[i] = *ptrarr[i] = *pointer[i]
{
	float avrg,sum=0;
	int i;
	for(i=0;i<5;i++)
	{
		sum=sum+(*pointer[i]);
	}
	avrg=sum/5;
	return avrg;
}

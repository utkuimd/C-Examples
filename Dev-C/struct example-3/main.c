#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student
{
	int id;
	int hw[4];
}st_ko;

int main(int argc, char *argv[]) {
	FILE *dosya1;
	FILE *dosya2;
	FILE *dosya3;
	dosya1=fopen("girisdegeri.txt","r");
	dosya2=fopen("passdegeri.txt","w");
	dosya3=fopen("faildegeri.txt","w");
	
	while(!feof(dosya1))
	{
		fscanf(dosya1,"%d%d%d%d%d",&st_ko.id,&st_ko.hw[0],&st_ko.hw[1],&st_ko.hw[2],&st_ko.hw[3]);
		printf("%d %d %d %d %d\n",st_ko.id,st_ko.hw[0],st_ko.hw[1],st_ko.hw[2],st_ko.hw[3]);
		if((st_ko.hw[0]+st_ko.hw[1]+st_ko.hw[2]+st_ko.hw[3])/4<30)
		{
			fprintf(dosya2,"%d pass\n",st_ko.id);
		}
		else
		{
			fprintf(dosya3,"%d fail\n",st_ko.id);
		}	
	}
	return 0;
}

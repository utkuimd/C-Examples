#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct person
{
	int id;
	char name[50];
	int para;
}st_ko;

int main(int argc, char *argv[]) {

	FILE *dosya1;
	FILE *dosya2;
	FILE *dosya3;

	dosya1=fopen("girisportu.txt","r");
	dosya2=fopen("cikisportu.txt","w");
	dosya3=fopen("cikisportu1.txt","w");

	while(!feof(dosya1))
	{
		fscanf(dosya1,"%d%s%d",&st_ko.id,st_ko.name,&st_ko.para);
		printf("%d %s %d\n",st_ko.id,st_ko.name,st_ko.para);
		if(st_ko.para>=10000 && st_ko.name[0]=='e')
		{
			fprintf(dosya2,"%d %s this person's name begin with 'e'.\n",st_ko.id,st_ko.name);
		}
		else
		{
			fprintf(dosya3,"%d %s this person's name not begin with 'e'.\n",st_ko.id,st_ko.name);
		}
	}
	return 0;
}

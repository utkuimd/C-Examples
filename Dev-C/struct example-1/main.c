#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct kompleks
{
	int re[1];
	int im[1];
}st_ko,st_ro;

int main(int argc, char *argv[]) {

	FILE *dosya1;
	dosya1=fopen("kompleks.txt","w");
	int z1,z2,z3,z4;

	scanf("%d%d%d%d",&st_ko.re[0],&st_ko.im[0],&st_ko.re[1],&st_ko.im[1]);
	printf("%d+j%d\n%d+j%d\n",st_ko.re[0],st_ko.im[0],st_ko.re[1],st_ko.im[1]);

	z1=st_ko.re[0]*st_ko.re[1];
	z2=st_ko.re[0]*st_ko.im[1];
	z3=st_ko.im[0]*st_ko.re[1];
	z4=(st_ko.im[0]*st_ko.im[1])*(-1);

	st_ro.re[0]=z1+z4;
	st_ro.im[0]=z2+z3;

	printf("%dj%d\n",st_ro.re[0],st_ro.im[0]);
	fprintf(dosya1,"%dj%d",st_ro.re[0],st_ro.im[0]);

	fclose(dosya1);
	
	return 0;
}

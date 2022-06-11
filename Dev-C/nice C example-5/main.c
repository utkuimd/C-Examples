#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int row,kolon,satirdegiskeni=1,sayidegiskeni=1,bosluk=1;
	printf("enter a row number=");scanf("%d",&row);
	printf("enter a kolon number=");scanf("%d",&kolon);
	while(sayidegiskeni<=(row*2)+((kolon-2)*2) && satirdegiskeni<=kolon)
	{
		if(satirdegiskeni==1)
		{
			while(sayidegiskeni<=row)
			{
				printf("%d",sayidegiskeni);
				printf("\t");
				sayidegiskeni++;	
			}	
		printf("\n");
		}
		else if(satirdegiskeni==kolon)
		{
			while(sayidegiskeni<=(row*2)+((kolon-2)*2))
			{
				printf("%d",sayidegiskeni);
				printf("\t");
				sayidegiskeni++;	
			}	
		}
		else
		{
			printf("%d",sayidegiskeni);
			sayidegiskeni++;
			while(bosluk<=(row-1))
			{
				printf("\t");
				bosluk++;
			}
			bosluk=1;
			printf("%d",sayidegiskeni);
			sayidegiskeni++;
			printf("\n");
		}
	satirdegiskeni++;
	}
	return 0;
}

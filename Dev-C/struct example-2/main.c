#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Sortby
{
	char fname[50];
	int fmark;
};

void Makearrange(struct Sortby [4]);

int main(int argc, char *argv[]) {
	struct Sortby players[4]={"Utku",98,"Recep",31,"Mehmet",40,"Yasin",82};
	Makearrange(players);
	return 0;
}
void Makearrange(struct Sortby arr[4])
{
	int i,j;
	struct Sortby temp;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(arr[i].fmark > arr[j].fmark)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%s,%d\n",arr[i].fname,arr[i].fmark);
	}
}

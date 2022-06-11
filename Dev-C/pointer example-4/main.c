#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void srt(int *pointer);
int main(int argc, char *argv[]) {
	int arr[6]={10,5,9,1,8,7};
	int i=0;
	srt(arr);
	do
	{
		printf("%d\t",arr[i]);
		i++;
	}while(i<6);
	return 0;
}
void srt(int *pointer)
{
	int i,j,temp;
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(*(pointer+j)<*(pointer+i))
			{
				temp=*(pointer+i);				
				*(pointer+i)=*(pointer+j);			
				*(pointer+j)=temp;					
			}
		}
	}
}


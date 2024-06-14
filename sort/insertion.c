#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void insertionSort(int x[],int n)
{int i,j,key;
for(i=1;i<n;i++)
{key=x[i];
j=i-1;
while(j>=0&&x[j]>key)
{x[j+1]=x[j];
j=j-1;
}
x[j+1]=key;
}
}
int main(int argc, char *argv[]) {
	int x[5]={5,3,2,4,1,0},i;
	insertionSort(x,5);
	for(i=0;i<5;i++)
	{printf("%d",x[i]);
	}
	return 0;
}

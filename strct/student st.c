#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct  {
char  name[20];
int age;
float gpa;
int semester;

}student;
int GPA(student x[],int n)
{int count=0,i;
for(i=0;i<n;i++)
{if(x[1].gpa>=3.4)
count++;
}
return count;	
}
void sort(student x[],int n)
{int pass,i;
for(pass=1;pass<n;pass++)
{for(i=0;i<n-pass;i++)
{if(x[i].gpa>x[i+1].gpa)
{student temp=x[i];
x[i]=x[i+1];
x[i+1]=temp;
}
}
}
}
int main(int argc, char *argv[]) {
	student x[50];
	int c,n;
	scanf("%d",&n);
	c=GPA(x,n);
	sort(x,n);
	return 0;
}

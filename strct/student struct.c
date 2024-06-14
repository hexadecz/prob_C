#include <stdio.h>
#include <stdlib.h>
#inclide <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct students{
	char name[20];
	int reg;
	char grade;
	float gpa;
}student;
int fail(student x[],int n)
{int count;
for(int i=0;i<n;i++)
{if(x[i].grade=='f')
 count++;
}
return count;}
void Printname(student x[],int n,char target)
{float total=0,average;
int i;
char *z;
for(i=0;i<n;i++)
{total=total+x[i].gpa;
}
average=total/n;
for(i=0;i<n;i++)
{z=strstr(x[i].name,target);
if(!=NULL)
{	if(x[i].gpa>average)
		{puts(x[i].name);
		printf("%f",x[i].gpa);}
}
}
}
void sortName(student x[],int n)
{int pass,i;
for(pass=1;pass<n;pass++)
{for(i=0;i<n-pass;i++)
{if(strcmp(x[i].name,x[i+1].name)<0)
{student temp=x[i];
x[i]=x[i+1];
x[i+1]=temp;}
}
}
}
int main(int argc, char *argv[]) {
	student x[100];
	int n,i,f;
	char t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{gets(x[i].name);
	scanf("%d %c %f",&x[i].reg,&x[i].grade,&x[i].gpa);
	}
	f=fail(x,n);
	scanf("%c",&t);
	Printname(x,n,t);
	sortName(x,n);
	return 0;
}

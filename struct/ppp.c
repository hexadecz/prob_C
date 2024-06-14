#include <stdio.h>
int fun (int x)
{ if (x<1) 
return 1;
else
Printf("%d %d \n", x, fun(x-1));
}
void main()
{
int x,y;
x = 5;
y = fun(x);
printf("\n x = %d f(x) = %d \n", x, y);
}

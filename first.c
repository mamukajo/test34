#include<stdio.h>

int fun(int,int);

int main()
{

int a,b;

printf("enter value for a");
scanf("%d",&a);

printf("enter value for b");
scanf("%d",&b);

printf("addition of two numbers %d",fun(a,b));

}

int fun(int x,int y)
{

return x+y;
}





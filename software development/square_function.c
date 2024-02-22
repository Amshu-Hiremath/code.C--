#include<stdio.h>
int getnum(void);
int sqr(int x);
void printone(int p);
void main()
{
    system ("CLS"); 
    int a,b,square;
    a=getnum();
    printf("%d",a);
    b=sqr(a);
    printone(b);
}
int getnum()
{
    int z;
    scanf("%d",&z);
    return z;
}
int sqr(int x)
{
    return(x*x);
}
void printone(int y)
{
    int c=y
    printf("%d",c);
}
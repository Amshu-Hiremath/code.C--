//square
#include<stdio.h>
int isquare(int x)
{
    return (x*x);
}
double fsquare(double y)
{
    return (y*y);
}
void main()
{
    system("CLS");
    int(*fnp1)();
    double(*fnp2)();
    fnp1=isquare;
    fnp2=fsquare;
    int n=5,m;
    double a=6.9,b;
    m=(*fnp1)(n);
    b=(*fnp2)(a);
    printf("The square of the inegers is %d\n",m); 
    printf("The square of the double is %f\n",b);
}
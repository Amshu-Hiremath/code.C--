#include<stdio.h>
void main()
{
    system("CLS");
    int a,b,sum,diff,pro,quo,mod;
    float div;
    printf("Enter the 1st number\n");
    scanf("%d",&a);
    printf("Eber the 2nd number\n");
    scanf("%d",&b);
    sum=a+b;
    diff=a-b;
    pro=a*b;
    quo=a/b;
    mod=a%b;
    div=(float)a/b;
    printf("The sum of the 2 numbers is:%d\nThe difference of the 2 numbers is:%d\nThe product of the 2 umers is:%d\nThe division of the 2 numbers is:%d\nThe modulus of the 2 numbers is:%d\nThe float division of the 2 numbers is:%f\n",sum,diff,pro,quo,mod,div);
}
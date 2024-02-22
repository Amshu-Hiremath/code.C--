#include<stdio.h>
int multiply(int a,int b);     //function declaration
void main()
{
    system ("CLS");
    int multiplier,multiplicand,product;
    printf("Enter two integer numbers\n");
    scanf("%d%d",&multiplier,&multiplicand);
    product=multiply(multiplier,multiplicand);      //function call
    printf("Product of the 2 numbers %d and %d is:%d",multiplier,multiplicand,product);
}
int multiply(int a,int b)
{
    return(a*b);
}
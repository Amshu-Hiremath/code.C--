#include<stdio.h>
void main()
{
    system ("CLS");
    int n;
    int *j=&n;
    scanf("%d",&n);
    printf("The value of the the integer is:%d \n The address of the given integer is:%d\n The value of the integer is:%u\n The address of the pointer is:%u",n,j,n,&j);
}
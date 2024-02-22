#include<stdio.h>
void add(int *numadr);
void main()
{
    system ("CLS");
    int num=69;
    printf("The value of the num before calling the function is %d",num);
    add(&num);
    printf("\n The value of the num after calling the function is%d",num);
    printf("\nThe value of the address after calling the function is %u",numadr);
}
void add(int *numadr)
{
    *numadr=*numadr+10;
    printf("\nThe value of the num in called fucion is %d",numadr);
    printf("\nThe value of address of num in called function is %u",numadr);
    return;
}
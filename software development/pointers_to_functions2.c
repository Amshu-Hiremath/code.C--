//subtract
#include<stdio.h>
int subtract(int a, int b)
{
    return (a-b);
}
int main()
{
    system("CLS");
    int (*fp)(int , int)=subtract;
    int result=(*fp)(10,14);
    printf("Result is %d",result);
}
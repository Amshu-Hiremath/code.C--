//sum
#include<stdio.h>
int sum(int,int);
int main()
{
    system("CLS");
    int result;
    int (*ptr)(int,int); //or int(*ptr)()
    ptr=sum; //result=sm(10,14)
    result=(*ptr)(10,14); //fn call
    printf("Sum=%d\n",result); 
}

    int sum(int x, int y)
{
    return(x+y);
}

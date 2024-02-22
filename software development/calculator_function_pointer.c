#include<stdio.h>
float display(float x)
{
    printf("%f",x);
    return 0;
}
float sum(float a, float b)
{
    return (a+b);
}
float diff(float c, float d)
{
    return (c-d);
}
float pro(float e, float f)
{
    return (e*f);
}
float quo(float g, float h)
{
    if(h!=0)
    return (g/h);
    else
    printf("Invalid input\n");
}
void main()
{
    system("CLS");
    float p,q,ans;
    char c;
    printf("Enter the 2 numbers:\n");
    scanf("%f %f",&p,&q);
    printf("Enter the operation to be performed:\n");
    scanf(" %c",&c);
    float(*pnt)(float,float);
    float(*dis)(float);
    switch(c)
    {
        case '+': pnt=sum;
        break;
        case '-': pnt=diff;
        break;
        case '*': pnt=pro;
        break;
        case '/': pnt=quo;
        break;

    }
    ans=(*pnt)(p,q);
    dis=display;
    (*dis)(ans);
}
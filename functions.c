#include <stdio.h>
void add(int a,int b);
void main()
{
    system("CLS");
    int a, b;
    printf("Enter the numbers : ");
    scanf("%d %d", &a, &b);
    add(a,b);
}
void add(int x,int y)
{
  
    printf("add = %d", x + y);
}
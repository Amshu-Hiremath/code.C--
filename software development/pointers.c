#include<stdio.h>
void main()
{
    system ("CLS");
    int i[5]={1,2,3,4,5},z;
    int *j=&i;
    for(z=0;z<5;z++)
    {
         printf(" %d ",i[z]);
         *j++;
    }
    
    
}
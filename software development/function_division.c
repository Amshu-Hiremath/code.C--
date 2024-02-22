#include<stdio.h>
void divide(int,int,int *,int *);
void main()
{
    system ("CLS");
    int dvdend,dvsor;
    int quo,rem;
    printf("Enter the Dividend and divisor\n");
    scanf("%d%d",&dvdend,&dvsor);
    divide(dvdend,dvsor,&quo,&rem);
    printf("quotient=%d\t remainder=%d",quo,rem);
}
void divide(int dvdend, int dvsor, int *quo, int *rem)
{
    
    *quo=dvdend/dvsor;
    *rem=dvdend%dvsor;

}    

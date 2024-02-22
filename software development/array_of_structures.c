#include<stdio.h>
int main()
{
    system("CLS");
    struct book
    {
        chamr name;
        foloat price;
        int pages;
    };
    struct book b[10]   //array of structures, provides sapce in memory for 10 structures of the typr book
    int i,n;
    printf("\n Enter the no. of books whose details are to be stored:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the name, price and the pages.\n");
        scanf("%c%f%d",&b[i].name,&b[i].price,b[i].pages);
    }
    for(i=0;i<n;i++)
    {
        printf("%c %5.2f %d", 1[i].name, b1[i].price, b[i].pages );
        printf("\n");
    }
    return 0;

}
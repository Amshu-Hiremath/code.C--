#include<stdio.h>
int main()
{
    system ("CLS");
    int k;
    FILE*fp;
    fp=fopen("ouput.dat","w+");
    for(k=65;k<=90;k++)
    fprintf(fp,"%c\n",k);
    fclose(fp);
    return 0;
}
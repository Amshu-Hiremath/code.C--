#include<stdio.h>
int main()
{   system ("CLS");
    char ch;
    int k;
    FILE*fp;
    fp=fopen("ouput.dat","r");
    while(foef(ch))
    {
        printf("%c",ch);
        c=fscanf(fp);
    }
    fclose(fp)
    return 0;
}
#include<stdio.h>
void main()
{
    system("CLS");
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o|'|ch=='O'||ch=='u'||ch=='U')
    printf("The given character is a vowel\n");
    else
    printf("The given character is not a vowel\n");
}
#include<stdio.h>
int main()
{
    struct address
    {
        char phone[15];
        char city[25];
        int pin;
    };
    struct emp
    {
        char name[25];
        struct address a;
    };
    struct ep e={"MSC","531046","Belagavi".590006};
    printf("\nname=%s phone=%s ",e.name,e.phone");

}
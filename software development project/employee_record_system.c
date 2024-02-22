#include <stdio.h>
#include <string.h>
#include <libxl.h>

struct emp
{
    char name[20];
    int age;
    char empid[10];
    char dept[5];
    int salary;
} e[100];

int add_emp(struct emp *p, int a);
int del_emp(struct emp *p, int a);
int rep_emp(struct emp *p, int a);
void sav_emp(struct emp *p, int a);

void main()
{
    struct emp *a = e;
    int r, n, i, j, ch;
    BookHandle book = xlCreateBook();
    if (xlBookLoad(book, "emp.xls"))
    {
        SheetHandle sheet = xlBookGetSheet(book, 0);

        if (sheet)
        {
            r = xlSheetLastRow(sheet);

            for (i = 1; i <= r; i++)
            {
                xlSheetReadStr(sheet, i, 0, a[i].name);
                xlSheetReadNum(sheet, i, 1, a[i].age);
                xlSheetReadStr(sheet, i, 2, a[i].empid);
                xlSheetReadStr(sheet, i, 3, a[i].dept);
                xlSheetReadNum(sheet, i, 4, a[i].salary);
            }

            xlSheetRelease(sheet);
        }
    }

    xlBookRelease(book);

    while (1)
    {
        printf("Available Choice\n");
        printf("1. Add Employee\n");
        printf("2. Delete Employee\n");
        printf("3. Replace Employee\n");
        printf("4. Save File\n");
        printf("Enter Choice\n");

        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            int num;
            num = add_emp(*a, r);
            r += num;
        case 2:
            int num;
            num = del_emp(*a, r);
            r -= num;
        case 3:
            rep_emp(*a, r);
        case 4:
            sav_emp(*a, r);
            break;
        }
    }
}

int add_emp(struct emp *p, int a)
{
    int i, n;
    printf("Enter the number of employees to be added\n")
        scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%s", (p + i)->name);
        scanf("%d", (p + i)->age);
        scanf("%s", (p + i)->empid);
        scanf("%s", (p + i)->dept);
        scanf("%d", (p + i)->salary);
    }
    return 0;
}

int del_emp(struct emp *p, int a)
{
    int count = 0, i;
    char n[20];

    printf("Enter the name to be deleted\n");
    scanf("%s", &n);

    for (i = 1; i <= a; i++)
    {
        int t = i;
        if (strcmp(n, *(p + t)->name) == 0)
        {
            while (t <= a)
            {
                *(p + t)->name = *(p + t + 1)->name;
                *(p + t)->age = *(p + t + 1)->age;
                *(p + t)->empid = *(p + t + 1)->empid;
                *(p + t)->dept = *(p + t + 1)->dept;
                *(p + t)->salary = *(p + t + 1)->salary;
                t++;
            }
            count++;
            break();
        }
    }

    if (count == 0)
        printf("Employee not found\n");
    return(count);
}

void rep_emp(struct emp *p, int a)
{
    int i, count = 0;
    char n[20];
    printf("Enter the name to replace\n;");
    scanf("%s", &n);
    for (i = 1; i <= a; i++)
    {
        if (strcmp(n, *(p + i)->name) == 0)
        {
            printf("Enter the new name\n");
            scanf("%s", (p + i)->name);
            printf("Enter the new age\n");
            scanf("%d", (p + i)->age);
            printf("Enter the new empid\n");
            scanf("%s", (p + i)->empid);
            printf("Enter the new dept\n");
            scanf("%s", (p + i)->dept);
            printf("Enter the new salary\n");
            scanf("%s", (p + i)->salary);
            count++;
            printf("Employee sucessfully replaced\n");
            break();
        }
    }
    if (count == 0)
        printf("Employee not found\n");
}
void sav_emp(struct emp *p, int a)
{
    int i;
    BookHandle book = xlCreateBook();
    if (xlBookLoad(book, "emp.xlsx"))
    {
        SheetHandle sheet = xlBookGetsheet(book, 0);
        if (sheet)
        {
            xlSheetClear(sheet);
            for (i = 1; i <= a; i++)
            {
                xlSheetWriteStr(sheet, i, 0, *(p + i)->name, 0);
                xlSheetWriteNum(sheet, i, 1, *(p + i)->age, 0);
                xlSheetWriteStr(sheet, i, 2, *(p + i)->empid, 0);
                xlSheetWriteStr(sheet, i, 3, *(p + i)->dept, 0);
                xlSheetWriteStr(sheet, i, 4, *(p + i)->salary, 0);
            }
            xlSheetRelease(sheet);
        }
    }
    xlBookSave(book, "emp.xlsx");
    xlBookRelease(book);
}

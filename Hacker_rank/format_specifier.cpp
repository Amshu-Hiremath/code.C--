#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    system ("CLS");
    int n;
    long long int l;
    char c;
    float f;
    double d;
    scanf("%d %lld %c %f %lf",&n,&l,&c,&f,&d);
    printf("%d\n%lld\n%c\n%f\n%lf", n, l, c, f, d);
    return 0;
}
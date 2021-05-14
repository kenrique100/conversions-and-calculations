#include<stdio.h>

int main()
{
int a, b, c, d;
    printf("Enter value for a:");
    scanf("%d", &a);
    printf("Enter value for b:");
    scanf("%d", &b);
    c=a+b;
    d=a-b;
    printf("value for c and d=%d%d", c, d);
    return 0;
}
#include <stdio.h>
int main()
{
    int a,b ;
    printf("please input the first number:");
    scanf("%d",&a);
    printf("please input the second number:");
    scanf("%d",&b);
    if(a>b)
    {
        printf ("a大于b");

    }
    else if (a==b)
    {
        printf("a等于b");

    }
    else
    {
        printf("a小于b");
    }
}
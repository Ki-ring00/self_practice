#include<stdio.h>
int main()
{
    int m;
    printf("please input a number");
    scanf("%d",&m);

    if (m%2==0)
    {
        printf("%d是偶数",m);
    }
    else{
        printf ("%d是奇数",m);
    }
    return 0;

}
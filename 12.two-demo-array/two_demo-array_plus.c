#include<stdio.h>
#define M 9

int main()
{
    int i,j;
    for(i=1;i<M;i++);
    {
        for(j=i;j<=1;j++)
        {
            printf("%d*%d=%-3d",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}




























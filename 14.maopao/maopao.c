#include<stdio.h>
#define N 4
int main()
{
    int a [N];
    int i,j;
    for ( i = 0; i < N; i++)
    {
        printf("%dth:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if (a[j]>a[j+1])
            {
                int t =a[j]; 
                a[j]=a[j+1];
                a[j+1]=t;
            }
            
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%-5d",a[i]);
    }
    return 0;
    
}
# include<stdio.h>
#define N 4

int main()
{
    int a [N];
    int i;
    for(i=0;i<N;i++)
    {
        printf("%dth:",i+1);
        scanf("%d",&a[i]);

    }
    for(i=0;i<N;i++)
    {
        printf("%-5d",a[i]);

    }
    printf("\n");
    int max=0;
    for(i=1;i<N;i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
    }
    printf("max=%d",max);
    return 0;
}
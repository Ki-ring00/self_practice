# include<stdio.h>
#define N 3
int main()
{
    int scores[N];
    int i;
    for ( i = 0; i < N; i++)
    {
        printf ("Please input the %dth score:",i+1);
        scanf("%d",&scores[i]);


    }
    int sum =0;
    for( i = 0; i < N; i++)
    {
        sum=sum+scores[i];

    }
    printf("pingjunchengjishi: %.2f\n",(float)sum/N);

    int max=scores[0];
    for ( i = 1; i < N; i++)
    {
        if (max<scores[i])
        {
            max=scores[i];
        }
        
    }
printf("zuigaochengjishi:%d\n",max);
printf("suoyouchengji:");
for(i =0;i<N;i++)
{
    printf("%-6d",scores[i]);
}
    return 0;
    
}
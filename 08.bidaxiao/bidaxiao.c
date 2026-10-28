# include<stdio.h>

int main()
{
    int result=0;
    int i;
    for ( i = 1; i < 100; i++)
    {
        if (1%3==0)
        {
        result = result + i;
        }
    }
    printf("%d",result);
    return 0;

    
}
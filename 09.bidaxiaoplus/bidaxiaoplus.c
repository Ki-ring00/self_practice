#include<stdio.h>

int main()
{
    int result=0;

    int i=1;
    while (i<=100)
    
    {
        if (i%3==0)
        {
            result=result+1;
        }
        i=i+1;
    }
    printf("%d",result);

    return 0;
    
}
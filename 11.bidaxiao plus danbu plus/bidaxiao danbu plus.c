#include <stdio.h>
int main()
{
    int sum=0;
/*
    int i=1;
    while(i<=100)
    {
        sum=sum+1;
        i++;
    }*/
   
   
   /* int i=1;
   while(i<=100)
   {
    if (i%5==0)
    {
        sum=sum+i;
\        
    }
    i++;
   }*/

   int i=0;
   while(i<=100)
   {
        i++;
        if (i%5!=0)
        {
            continue;
        }
        sum=sum+1; 
   }
    printf("%d",sum);
    return 0;
}
#include<stdio.h>

int main()
{
    float operand1,operand2;
    char op;

    printf("please input operand1:");
    scanf("%f",&operand1);

    getchar();

    printf("please input operator:");
    scanf("%c",&op);

    printf("please input operand2:");
    scanf("%f",&operand2);

    switch (op)
    {
        case '+':
            printf("%f %c %f=%,2f",operand1,op,operand2,operand1+operand2);/* code */
            break;
        case '-':
            printf("%f %c %f=%,2f",operand1,op,operand2,operand1-operand2);/* code */
            break;
        case '*':
            printf("%f %c %f=%,2f",operand1,op,operand2,operand1*operand2);/* code */
            break;
        case '/':
                if (operand2==0)
                {
                    printf("除数不能为0");/* code */
                }
                else
                {
                    printf("%f %c %f=%,2f",operand1,op,operand2,operand1/operand2);/* code */
                }
                
            
                break;
        
    
    default:
        printf("operator Error");
    }
    return 0;
}






    

    
       
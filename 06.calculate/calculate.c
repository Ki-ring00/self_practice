#include <stdio.h>

int main()
{
    float operand1, operand2;
    char op;

    printf("请输入运算式（格式：数字 运算符 数字）：");
    scanf("%f %c %f", &operand1, &op, &operand2);

    if(op == '+')
    {
        printf("%f %c %f = %.2f", operand1, op, operand2, operand1+operand2);
    }
    else if(op == '-')
    {
        printf("%f %c %f = %.2f", operand1, op, operand2, operand1-operand2);
    }
    else if(op == '*')
    {
        printf("%f %c %f = %.2f", operand1, op, operand2, operand1*operand2);
    }
    else if(op == '/')
    {
        printf("%f %c %f = %.2f", operand1, op, operand2, operand1/operand2);
    }
    else
    {
        printf("Operator error");
    }

    return 0;
}
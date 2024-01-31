#include<stdio.h>
int main()
{
    int a,b;
    char operator;
    printf("Enter a value for a and b: ");
    scanf("%d %d",&a,&b);
    printf("Which operation Do you want? + , - , * ,/ :");
    scanf("\n%c",&operator);
    switch (operator)
    {
    case '+':
        printf("%d",a + b);
        break;
    case '-':
        printf("%d",a - b);
        break;
    case '*':
        printf("%d",a * b);
        break;
    case '/':
        printf("%d",a / b);
        break;    
    default:
        printf("You entered a wrong option!! Try again!!!");
        break;
    }
    return 0;
}
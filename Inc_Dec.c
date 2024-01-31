#include<stdio.h>
int main()
{
    int a=3;
    printf("%d %d %d",a++,a++,a++);
    return 0;

    //output will be in reverse, becoz of value stored in stack based memory
}
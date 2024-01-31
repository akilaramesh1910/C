#include<stdio.h>
int main()
{
    int n,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n>0)
    {
        s=n%10;
        printf("%d",s);
        n=n/10;
    }
    return 0;
}
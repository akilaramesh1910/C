#include<stdio.h>
int main()
{
    int num,n3;
    printf("Enter a number: ");
    scanf("%d",&num);
    int n1=1;
    int n2=1;
    printf("%d\t %d\t", n1, n2);
    for(int i=3;i<=num;i++){
        n3=n1+n2;
        printf("%d\t",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}
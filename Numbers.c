#include<stdio.h>
int main()
{
    int n;
    printf("How many numbers Do you want to print: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("\t%d",i);
    }
    return 0;
}
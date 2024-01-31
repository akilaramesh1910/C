#include<stdio.h>
int main()
{
    int n,i;
    int sum=0;
    printf("How many numbers Do you want to add: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
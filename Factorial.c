#include<stdio.h>
int main()
{
    int num;
    int result=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int n=num;n>=1;n-=2){
        if(n==1){
            result*=1;
        }
        else{
            result*=n*(n-1);
        }
    }
    printf("%d\t",result);
    return 0;
}
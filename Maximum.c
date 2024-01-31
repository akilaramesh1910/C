#include<stdio.h>
int main()
{
    int a,b,c,max=a;
    printf("Enter a value for a: ");
    scanf("%d",&a);
    printf("Enter a value for b: ");
    scanf("%d",&b);
    printf("Enter a value for c: ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            max=a;
        }
        else{
            max=c;
        }
    }
    else{
        if(b>c){
            max=b;
        }
        else{
            max=c;
        }
    }
    printf("The max value is %d",max);
    return 0;
}
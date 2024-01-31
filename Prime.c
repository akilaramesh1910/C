#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    int isPrime=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            isPrime=0;
            printf("%d is a not a prime number",n);
            break;
        }
    }
    if(isPrime==1){
        printf("%d is a prime number",n);
    }
    
    return 0;
}
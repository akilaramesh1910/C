#include<stdio.h>
int main()
{
    int arr[]={2,4,8,9,5};
    int n,index=-1;
    int arrLenth=sizeof arr/sizeof arr[0];
    printf("%d",arrLenth);
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<arrLenth;i++){
        if(n==arr[i]){
            index=i;
            break;
        }
    }
    if(index>-1){
        printf("Inedx of the number is %d",index);
    }
    else{
        printf("Inedx of the number is -1");
    }
    return 0;
}
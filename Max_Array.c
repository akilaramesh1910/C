#include<stdio.h>
int main()
{
    int array[30];
    int size;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter numbers: ");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    int max=array[0];
    for (int i = 1; i <size; i++){
       if(array[i]>max){
          max=array[i];
       }
    }
    printf("The max num is %d",max);
    
    return 0;
}
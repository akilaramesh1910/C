#include<stdio.h>
int main()
{
    for(int i=1;i<100;i++){
        if(i==34){
            continue;
        }
        else{
            printf("\t%d",i);
        }
    }
    return 0;
}
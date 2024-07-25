#include <stdio.h> 

int main (){
    int n,i=1,sum=0;
    printf("enter the number ");
    scanf("%d",&n);
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
        printf("the sum of number are  %d ",sum);
    return 0;
}
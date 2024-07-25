#include <stdio.h> 

int main (){
    int n,i;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=10;i;i--){
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}
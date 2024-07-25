#include <stdio.h> 

int main (){
    int a,b,n,sum=0;
    printf("enter the number ");
    scanf("%d",&n);
    for(a=1;a<11;a++){
        b=n*a;
        sum+=b;
    }
    printf("sum :%d",sum);
    return 0;
}
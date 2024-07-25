#include <stdio.h> 

int main (){
    int n,i,sum=0,a,b;
    printf("enter the number : ");
    scanf("%d",&b);
    for(i=1;i<=10;i++){
        for(a=1;a<2;a++){
            n=b*i;
            sum=sum+n;
        }
        n=b;
        

    }
        printf("sum : %d",sum);
    return 0;
}
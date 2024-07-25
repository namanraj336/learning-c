#include <stdio.h> 

int main (){
    int n=0,a=1,i,b=n+a,c;
    printf("enter the numbr of the elements ");
    scanf("%d",&c);
    printf("fibonacii series : %d,%d,",n,a);
    for(i=2;i<c;i++){
       printf("%d,",b);
       n=a;
       a=b;
       b=n+a;
    }

    return 0;
}
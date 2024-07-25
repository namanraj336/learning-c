#include <stdio.h> 

int main (){
    int a,b=0,f=1;
    printf("enter the number ");
    scanf("%d",&a);
    for(b=1;b<=a;++b){
        f*=b;
    }
    printf("factorial of the number is %d",f);
    return 0;
}
#include <stdio.h> 

int main (){
    int a,b=1,f=1;
    printf("enter the number ");
    scanf("%d",&a);
    while(b<=a){
        f*=b;
        b++;
    }
    printf("factorial of the number is %d",f);
    return 0;

    return 0;
}
#include <stdio.h> 
int fibonacci(int n);
int main (){
    int number;
    printf("enter the number of element in the fibonacci series\n");
    scanf("%d",&number);
    printf("the %dth element in the fibonacci series is %d",number,fibonacci(number));
    return 0;
}

int fibonacci(int n){
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    if(n>2){
        int result;
        result=((fibonacci(n-1))+fibonacci(n-2));
        return result;
    }
}
#include <stdio.h> 

int main (){
    int n, prime=0;
    printf("enter the number :");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=1;
            break;
        }
    }
    if(prime==1){
        printf("the number is not a prime number");
    }
    else{
        printf("the number is a prime number");
    }
    return 0;
}
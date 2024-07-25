#include <stdio.h> 
int star(int n);
int main (){
    int n;
    printf("enter the number of lines\n");
    scanf("%d",&n);
    int b;
    for(b=1;b<=n;b++){
        star(b);
        printf("\n");
    }
    return 0;
}

int star(int n){
    int a,c=((n*2)+1);
    for(a=c;a>0;a--){
        printf("*");
    }
}
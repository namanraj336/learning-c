#include <stdio.h> 

int main (){
    int a;
    printf("enter the value\n");
    scanf("\n %d", &a);
    if(a>=10||a<100)
     printf("\nthe value is greater or equal to 10");
    else        
     printf("\nthe value is smaller than 10\n");
     return 0;
}
#include <stdio.h> 

int main (){
    float m1,m2,m3,m4;
    printf("enter the value of m1: \n");
    scanf("%f", &m1);
    printf("enter the value of m2: \n");
    
    scanf("%f", &m2);

    printf("enter the value of m3: \n");
    scanf("%f", &m3);
    printf("enter the value of m4: \n");
    scanf("%f", &m4);
    
    

    float p=((m1+m2+m3+m4)*100)/160;
    printf("/n the prcentage of 4 subject is : %f",p);
    return 0;
}
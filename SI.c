#include <stdio.h>

int main (){
    
    int t;
    float r,p;

    printf("enter the principal amount \n");
    scanf("%f", &p);
    printf("enter the rate of intrest \n");
    scanf("%f", &r);
    printf("enter the time period (in years) \n");
    scanf("%d", &t);

    float si=p*r*t;

    printf("the simple intrest for %d years is %f \n", t, si/100);

    return 0;
}
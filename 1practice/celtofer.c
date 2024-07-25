#include <stdio.h>

int main()
{

    float c;

    printf("enter the temperayure in celcius \n");
    scanf("%f", &c);
    float i = c * 9;
    float i1 = i / 5;
    float i2 = i1 + 32;
    printf("the temperature in fareheit is %f \n", i2);
    return 0;
}
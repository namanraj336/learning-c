#include <stdio.h> 
float farenheit(int celcius);
int main (){
    int c;
    printf("enter the temperature in celcius\n");
    scanf("%d",&c);
    printf("the value in farenheit is %f",farenheit(c));
    return 0;
}

float farenheit(int celcius){
    float result;
    result=(celcius*1.8)+32;
    return result;
}
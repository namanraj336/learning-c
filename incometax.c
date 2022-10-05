#include <stdio.h> 
// program to determine income tax to be paid according to taxable income
int main (){
    float income;
    printf("enter the taxable income\n");
    scanf("%f", &income);
    float tax;
    if (income<=250000)
    {
        printf("no income tax to be paid\n");
    }
    else if (income>250000 && income<=500000)
    {
        tax=(income-250000)*0.05;
        printf("tax to be paid is %f\n", tax);
    }
    else if (income>500000 && income<=1000000)
    {
        tax=(250000*0.05)+ ((income-500000)*0.2);
        printf("the tax to be paid is %f\n", tax);
    }
    else{
        tax= ((250000*0.05) + (500000*0.2)) + ((income-1000000)*0.3);
        printf("tax to be paid is %f\n", tax);
    }
    
    return 0;
}
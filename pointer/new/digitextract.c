#include <stdio.h> 

int main (){
    int n,a=0,t=0,d=10,g=0,i,z=0;
    printf("enter the integer");
    scanf("%d",&n);
    if(n==0)
    printf("the highest value is 0");
    if(n<0)
    printf("not an integer");
    if(n>0)
    {
        for(i=1;i<=999;i++)
        {
            a=n%d;t=d/10;z=a/t;d=d*10;
            if(z>g)
            g=z;
            if(a<1)
            i=1001;
        }
    printf("the greatest digit is %d",g);    
    }
return 0;
}
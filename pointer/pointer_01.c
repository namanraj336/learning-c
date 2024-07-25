#include <stdio.h> 

int main (){
    int i=5, j, *k, *l;
    k=&i;
    printf("the adress of i is %u\n",k);
    j=i;
    l=&j;
    printf("the adress of j is %u\n",l); 
    return 0;
}
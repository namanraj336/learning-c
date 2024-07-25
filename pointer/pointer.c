#include <stdio.h> 

int main (){
    int i=12;
    int *j=&i;
    printf("%u\n",*j);
    printf("%u\n",&j);
    printf("%u\n",i);
    printf("%u\n",&i);
    return 0;
}
#include <stdio.h> 
void morning();//function prototype
void afternoon();//function prototype
void night();//function prototype
    
int main (){
   morning();//calling the function
   afternoon();//calling the function
   night();//calling the function
    return 0;
}

void morning(){
    printf("good morning \n");
}
void afternoon(){
    printf("good afternoon \n");
}
void night(){
    printf("good night \n");
}
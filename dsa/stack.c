#include <stdio.h> 
#include<stdlib.h>
#include<stdbool.h>

struct stack{
    int size;
    int top;
    int *arr;
};

bool isEmpty(struct stack *sp){
    if(sp->top==-1)
        return true;
    else
    return false;
}

bool isFull(struct stack *sp){
    if(sp->top==sp->size-1)
    return true;
    else
    return false;
}

int push(struct stack *sp,int key){
    if(isFull(sp)){
        printf("stack is full hence push operation cannot happen\n");
        return 0;
    }
    else{
        sp->top++;
        sp->arr[sp->top]=key;
    }
}

int pop(struct stack *sp){
    if(isEmpty(sp)){
        printf("stack is empty hence pop operation cannot happen\n");
        return 0;
    }
    else{
        int val=sp->arr[sp->top];
        sp->top=sp->top-1;
        printf("%d was succesfully popped\n",val);
    }
}

int peek(struct stack *sp,int key){
    int t=sp->top;
    if(isEmpty(sp)){
        printf("stack is empty hence peek opertion cannot happen\n");
        return -1;
    }
    else{
        while(t>=0){
            if(sp->arr[t]==key){
                printf("element %d was found at index %d\n",key,t);
                return 1;
            }
            t--;
        }
    }
    printf("element %d was not found in the stack\n",key);
    return 0;
}

int main (){
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=20;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    push(sp,23);
    push(sp,34);
    peek(sp,23);
    peek(sp,34);
    pop(sp);
    pop(sp);
    pop(sp);

    return 0;
}
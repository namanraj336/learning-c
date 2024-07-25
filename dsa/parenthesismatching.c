#include <stdio.h> 
#include<stdlib.h>
#include<stdbool.h>

struct stack{
    int top;
    int size;
    char *arr;
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

int push(struct stack *sp,char key){
    if(isFull(sp)){
        printf("\nstack is full hence push operation cannot happen");
        return 0;
    }
    else{
        sp->top++;
        sp->arr[sp->top]=key;
        return 1;
    }
}

int pop(struct stack *sp){
    if(isEmpty(sp)){
        printf("\nstack is empty hence pop operation cannot happen");
        return 0;
    }
    else{
        int val=sp->arr[sp->top];
        sp->top=sp->top-1;
        printf("\n%d was succesfully popped",val);
        return 1;
    }
}

int parenthesis(struct stack *sp,char cr[], int size){
    int i=0,p;
    while (i<=size)
    {
        if(cr[i]=='('){
            p=push(sp,'(');
        }
        else if(cr[i]==')'){
            p=pop(sp);
            if(p==0){
                printf("\nInvalid parenthesis equation");
                return 0;
            }
        }
        i++;
    }
    if(isEmpty(sp)){
        printf("\nIt is a valid parenthesis equation");
        return 1;
    }
    else{
        printf("\nInvalid parenthesis equation");
        return 0;
    }
}

int main (){
    int s,i,c;
    printf("enter the size of expression\n");
    scanf("%d",&s);
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->top=-1;
    sp->size=s+1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    printf("enter the expression characters one by one without space : ");
    char cr[s+1];
    scanf("%s",cr);

    printf("\nexpression is : ");
    for(i=0;i<s;i++){
        printf("%c",cr[i]);
    }

    int p=parenthesis(sp,cr,s);

    return 0;
}
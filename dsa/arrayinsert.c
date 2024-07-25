#include<stdio.h>
//traversal of array in c
void display(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d , ",arr[i]);
    }
    printf("\n");
}

//index insertion code of array in c
int indinsertion(int arr[],int key,int index,int size,int capacity){
    if(capacity<=size){
        return-1;  
        //
    }
    int i;
    for(i=size-1;i>index;i--){
        arr[i+1]=arr[i];
    }
    arr[index-1]=key;
    return 0;
}

int main()
{
    int arr[100]={1,3,4,5,6,7,8,65,66,67,98,99};
    int capacity=100,index=8,key=20,size=12;
    int q=indinsertion(arr,key,index,size,capacity);
    size++;
    if(q==-1){
        printf("insertion operation could not be completed because there was no space available in the array");
    }
    else{
        printf("insertion operation in array was done succesfully\n");
        display(arr,size);
    }
    return 0;
}
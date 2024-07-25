#include <stdio.h> 

void bSearch(int arr[],int range,int s){
    int l=0,m,r=range-1;
    while(l<=r){
        m=(l+r)/2;
        if(arr[m]==s){
            printf("number is found");
            break;
        }
        else if(arr[m]>s){
            r=m-1;
        }
        else if(arr[m]<s){
            l=m+1;
        }
    }
        if(l>r){
            printf("number is not available in the array");
        }
}

int main (){
    int array[10]={2,3,4,6,7,8,65,89,97,99},search;
    printf("enter the number you want to search\n");
    scanf("%d",&search);
    printf("\n");
    bSearch(array,10,search);
    return 0;
}
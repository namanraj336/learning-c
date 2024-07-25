#include <stdio.h> 

void selectionSort(int arr[],int range){
    int i,j,temp,min;
    for(i=0;i<range;i++){
        min=arr[i];
        for(j=i+1;j<range;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<range;i++){
        if(i<range-1)
        printf("%d , ",arr[i]);
        else
        printf("%d ",arr[i]);
    }
}

int main (){
    int array[12]={6,9,8,5,7,3,4,10,2,11,12,1};
    selectionSort(array,12);
    return 0;
}
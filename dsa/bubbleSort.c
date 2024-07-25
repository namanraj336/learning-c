#include <stdio.h> 

void bubbleSort(int arr[],int range){
    int i,j,temp;
    for(i=0;i<range;i++){
        for(j=0;j<range;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<range;i++){
        printf("%d , ",arr[i]);
    }
}

int main (){
    int array[12]={6,7,9,3,5,4,2,1,11,8,10,12};
    bubbleSort(array,12);
    return 0;
}
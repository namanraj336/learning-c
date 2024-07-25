#include <stdio.h> 

void insertionSort(int arr[],int range){
    int i,j,temp;
    for(i=0;i<range-1;i++){
        for(j=i+1;i>=0;i--){
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

void merge(int arr[],int l,int mid,int h){
    int g=h+1;
    int i,j,k,b[g];
    i=l;
    j=mid+1;
    k=l;
    while(i<=mid && j<=h){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++;
            k++;
        }
        else{
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        b[k]=arr[i];
        i++;
        k++;
    }
    while(j<=mid){
        b[k]=arr[j];
        j++;
        k++;
    }
    for(i=l;i<=h;i++){
        arr[i]=b[i];
    }
}

void mergeSort(int arr[],int l,int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}

void bubbleSort(int arr[],int size){
    int i,j,temp;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(arr[j]>arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nsorted array by bubble sort: ");
    for(i=0;i<size;i++)
        printf("%d  ",arr[i]);
    
}

int main (){
    int n,i,t;
    printf("enter the length of array to be created\n");
    scanf("%d",&n);
    int arr[n-1];
    for(i=0;i<n;i++){
        printf("enter the %dth element of the array : ",i+1);
        scanf("%d",&t);
        arr[i]=t;
        printf("\n");
    }
    int s=n-1;
    //bubbleSort(arr,n);
    mergeSort(arr,0,s);
    printf("\nsorted array by MergeSort: ");
    for(i=0;i<=s;i++)
        printf("%d  ",arr[i]);
    return 0;
}
#include <stdio.h> 

int main (){
    int i,j,c=1,n,t;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n-1];
    for(i=0;i<n;i++){
        printf("enter the %dth elememt :",i+1);
        scanf("%d",&t);
        arr[i]=t;
        printf("\n");
    }
    for(i=0;i<n;i++){
        c=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
                arr[j]=-1;
            }
        }
        if(arr[i]!=-1)
        printf("the frequency of %d is %d \n",arr[i],c);
    }
    return 0;
}
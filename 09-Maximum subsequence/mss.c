#include <stdio.h>
int mss;

void main(){

    int arr[100];
    int size;
    printf("Enter the array elements:\n");
    scanf("%d",&size);
    printf("Enter the values : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int lms=mss=arr[0];
    
    for(int i=1;i<size;i++){
        if(arr[i-1]<=arr[i]){
            lms=lms+arr[i];
        }else{
            lms=arr[i];
        }
        if(lms>=mss){
                mss=lms;
        }
    }

    printf("\n>>%d",mss);






    
}
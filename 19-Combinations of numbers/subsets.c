#include <stdio.h>

void printCombinationsWrapper(int a[], int n);
void dandc(int arr[],int subset[],int i,int n);
void dispSet(int set[],int n);


#define SIZE 10

int main() {
    int arr[SIZE], n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
      scanf("%d", &arr[i]);
    }


    printCombinationsWrapper(arr, n);
    return 0;
}

void printCombinationsWrapper(int arr[], int n){
  		int subset[SIZE]={};
        //calling with starting index 0
        dandc(arr,subset,0,n);  
}
void dandc(int arr[],int subset[],int i,int n){
    if(i==n){
        //we are pointing outside of array => we went through allitems
        dispSet(subset,n);
    }else{
        //we include peresent element at index i and send
        subset[i]=arr[i];
        dandc(arr,subset,i+1,n);
        //we don't include elemt > make that as null and send
        subset[i]='\0';
        dandc(arr,subset,i+1,n);
    }
 	 
}

void dispSet(int set[],int n){
    for(int i=0;i<n;i++){
        //print non null elements only 
        if(set[i]!='\0')
        printf("%d,",set[i]);
    }
    printf("\n");
}
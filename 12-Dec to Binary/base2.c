#include <stdio.h>

int main(int argc, char const *argv[]){
    int n,arr[50];
    int x[30];
    printf("Enter the input value: \n");
    scanf("%d",&n);
    int m=n;

    int i;

    for(i=0;n>0;i++){
        arr[i]=n%2;
        //printf("%d ",arr[i]);
        x[i]=arr[i];
        n=n/2;
    }

    for(int j=0;j<i-1;j++){
        printf("%d ",x[j]);
    }
    
    return 0;
}

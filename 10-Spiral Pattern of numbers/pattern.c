#include<stdio.h>
#include <math.h>
int main(){
    
    int count=1;
    int n;
    printf("Enter your input: ");
    scanf("%d",&n);
    int low=0,top=n-1;
    int arr[100][100]={{0}};

    for(int i=0;i<=ceil(n/2.0);i++){
        
        for(int j=low;j<=top;j++){
            arr[low][j]=count++;
        }

        for(int j=low+1;j<=top;j++){
            arr[j][top]=count++;
        }

        for(int j=top-1;j>=low;j--){
            arr[top][j]=count++;
        }

        for(int j=top-1;j>low;j--){
            arr[j][low]=count++;
        }

        low++;
        top--;

    }


    //printing array
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            printf("%6d ",arr[i][j]);
        }

        printf("\n");
    }


    return 0;
}

#include<stdio.h>

int main(){
    int n,a[100];
    printf("Enter the values :\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int k;
    printf("Enter the number : \n");
    scanf("%d",&k);

    int ex=0;
    for(int i=0;i<n;i++){
       ex=ex^a[i];
    }

    //printf("exor : %d",ex);

    int x=k-ex;

    printf("%d",x);






    return 0;
}

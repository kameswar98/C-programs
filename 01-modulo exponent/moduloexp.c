#include<stdio.h>

int main(){
    
    printf("Enter the inputs : base exponents modulus : \n");
    int b,e,m;
    scanf("%d%d%d",&b,&e,&m);
    int x=1;
    for(int i=0;i<e;i++){
        x=x*b;
    }
    printf("output:%d",x%m);
    return 0;
}
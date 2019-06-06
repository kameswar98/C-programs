#include<stdio.h>

int gcd(int m, int n){

    //get smallest
    int smallest;
    if(n<m||n==m){
        smallest=n;
    }else{
        smallest=m;
    }
    int g;
    for(int i=1;i<=smallest;i++){
        if(m%i==0 && n%i==0){
            g=i;
        }
    }
    return g;
}


int main(int argc, char const *argv[])
{
    int m,n;
    printf("Enter the input values (m,n): ");
    scanf("%d%d",&n,&m);
    int lc;
    int gc=gcd(m,n);
    int x=m*n;
    lc=x/gc;

    
    printf("lcm : %d",lc);
    return 0;
}

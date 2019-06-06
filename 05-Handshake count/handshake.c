#include<stdio.h>

int fact(int val){
    int fact=1;
    for(int i=2;i<=val;i++){
        fact=fact*i;
    }
    return fact;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter total people value:\n");
    scanf("%d",&n);
    int fn=fact(n);
    int x=fact(fn-2);

    int hs=fn/(x*2);
    printf("%d",hs);
    return 0;
    
}

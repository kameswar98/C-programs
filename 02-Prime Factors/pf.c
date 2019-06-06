#include<stdio.h>
int isPrime(int val){
    int flag=0;

    for(int i=2;i<val;i++){
        if(val%i==0){
            flag=1;
            break;
        }
    }

    if(flag==0){
        return 1;
    }
    else{
        return 0;
    }

}

int getdivprime(int val){
    int j;
    int i,p,d;
    if (isPrime(val)) {
        printf("%d",val);

    }
    else {
        for (i = 2; i<(val/2)+1; i++){  
         if(isPrime(i) && val%i==0){
                d=val/i;
                printf("%d*",i);
                break;
            }
         }
         return getdivprime(d);
     }
        
    }



int main(int argc, char const *argv[])
{   
    int n;//input
    printf("Enter the input:\n");
    scanf("%d",&n);
    getdivprime(n);
    return 0;
}



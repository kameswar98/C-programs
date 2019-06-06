#include<stdio.h>
char a='a',b='b',c='c';
//not working !!!!

void toh(int start,int end,char from, char to){
    if(end==1){
        printf("move disk %d from %c to %c\n",end,from,to);
    }else{
        toh(start,end-1,a,b);
        printf("move disk %d from %c to %c\n",end,a,b);
        toh(start,end-1,a,b);
    }
}
int main(){   
    int n;
    printf("Enter your input disks :");
    scanf("%d",&n);
    toh(1,n,a,b);
    return 0;
}


// not working 
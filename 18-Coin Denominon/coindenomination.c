#include <stdio.h>

int notesCount[]={30,20,10,20,2,3,4};
int notesValues[]={2000,1000,500,100,50,20,10};
int userAmount=0;

int demon(int i){
    int rem=userAmount%notesValues[i];
    int q=userAmount/notesValues[i];
    if(i==7||userAmount==0){
        if(userAmount<10){
            printf("\nremaining : %d",userAmount);
        }   
        return 0;
    }else{
        if(rem<notesValues[i]&&notesCount[i]>=q){
            printf("%d * %d\n",notesValues[i],q);
            userAmount=rem;
            notesCount[i]=notesCount[i]-q;
            demon(i+1);
            return 0;
        }else{
            printf("\nInsufficient amount in ATM");
        }
        
    }

}

int main(int argc, char const *argv[])
{
    printf("Enter your amount :\n");
    scanf("%d",&userAmount);
    demon(0);
    return 0;
}

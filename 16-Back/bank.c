#include<stdio.h>

int stack[30000];
int top=-1;

char trans[3][100]={"Balance-enquiry","cash-withdrawl","pinchanged"};

void add(int trans_id){
    stack[++top]=trans_id;    
}

void prin(){
    if(top==-1){
        printf(">>>>>>>>>>>>>>>>>No Transcations have done !");
    }else{
        printf("\n >>>>>>>>>>>>>>>>>Your Transcations are ::");
        for(int i=top;i>top-3;i--){
        if(i!=-1){
            printf("\n%s",trans[stack[i]]);
        }else   
            break;
    }
    be();
    }
    
}

float amount=1000;
int pin=1234;


void be(){
    printf("Your Current Balance is : %.2f rupees",amount);
    add(0);

}
void wd(){
    int am;
    printf("\nEnter your amount : ");
    scanf("%d",&am);

    if(am<=amount){
    amount-=am;
    printf("\n Sucess ! Please Collect your amount ! :)\n");
    add(1);
    be();
    }else{
        printf("\nIn sufficient amount !");
    }
   
}
void pc(){
    printf("Enter your pin:\n");
    scanf("%d",&pin);
    printf("Pin sucessfully changed !:)\n");  
    add(2);
}


int main(int argc, char const *argv[]){
    printf("Hello welcome !\n");
    printf("please Enter your choice :\n");
    int ch;
    do{ 
        printf("\n\n1.Balance Enquiry\n2.Cash Withdrawl\n3.PinChange\n4.MiniStatement\nAny other key exit ...\n");
        scanf("%d",&ch);
        switch (ch){
            case 1:
                be();
                break;
            case 2:
                wd();
                break;
            case 3:
                pc();
                break;
            case 4:
                prin();
                break;
            default:
                printf("\nThank you for using\n");
                break;
        }

        
    } while(ch<=4&&ch>0);



    return 0;
}

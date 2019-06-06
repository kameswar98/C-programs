#include <stdio.h>
#include <string.h>

    //ascii code
    // char c=s1[3];
    // int ascii=(int) c;
    // printf("%d",ascii);


int main(int argc, char const *argv[]){
    
    char st1[26]={0},st2[26]={0},s1[100],s2[100];
    printf("\nEnter string 1 : ");
    gets(s1);
    printf("\nEnter string 2 : ");
    gets(s2);
    int ss1,ss2;
    for(ss1 = 0; s1[ss1] != '\0'; ++ss1);
    for(ss2 = 0; s2[ss2] != '\0'; ++ss2);
   
    if (ss1==ss2) {
        
        for(int i=0;i<ss1;i++){
            int ascii=(int) s1[i];
            ascii= ascii-97;
            st1[ascii]=st1[ascii]+1;
        }
        
        for(int i=0;i<=ss2;i++){
            int ascii=(int) s2[i];
            ascii= ascii-97;
            st2[ascii]=st2[ascii]+1;
        }
        
        int flag=0;
        for(int i=0;i<26;i++){
           // printf("  st1:%d, st2:%d  \n",st1[i],st2[i]);
            if(st1[i]!=st2[i]){
                flag=1;
                break;
            }
        }

        if(flag==0){
            printf("\nIt is an anagram !");
        }else{
            printf("\nIt is not an anagram !");
        }

    }   
    else {
        printf("\nNot an anagram");
    }
    


    return 0;
}

#include<stdio.h>
void main(){
char a[50],b[50],css[50];
int i,j,count1=0,count2=0,common=0,k=0;
printf("Enter string-1 \n");
gets(a);
printf("Enter string-2 \n");
gets(b);

//getting count1
for(i=0;a[i] != '\0';i++){
count1++;
}
//getting count2
for(i=0;b[i] != "\0";i++){
count2++;
}

for(i=0;i<count1;i++){
	for(j=0;j<count2;j++){
		if(a[i]==b[j]){
			common++;
			css[k]=a[i];
			k++;
			break;
			}
		}
	}
if(css[0] == NULL){
printf("\nNothing Common");
}
else{
printf("Common characters : \n%d",common);
for(i=0;i<k;i++){
printf("%c",css[i]);
}
}
} 
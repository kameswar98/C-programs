#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// sort Zombies
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n; i++)
    for (j = 0; j < n-i; j++) 
      if (arr[j] > arr[j+1])
        swap(&arr[j], &arr[j+1]);
}

//calculate energy of player after he fight with zombies .
int calcEnergy(int ep,int arr[],int n){

    for (int i = 0; i < n; i++){
      
      if (ep>arr[i]) {
        ep=ep+(ep-arr[i]);
      }
      else {
        return ep;
      }
      
    }
    return ep;

}




int main() {

  int zc,ep,t,er;
  int zn[100];

  printf("Enter number of zombies (Zn) :");
  scanf("%d",&zc);
  printf("Enter energy of each zombie (Ez)\n");
  for (int i = 0; i <zc; i++) {
    printf("For Zombie-%d : ",i+1);
    scanf("%d",&zn[i]);
  }

  printf("Enter time for this level (L):\n");
  scanf("%d",&t);
   //we assume 1unit time for 1 zombie
  if (t>=zc) {
    printf("Enter energy of the player Ep:\n");
    scanf("%d",&ep);
    
    printf("Enter Energy required for next level (Er):\n");
    scanf("%d",&er);
    
    bubbleSort(zn,zc);
    ep=calcEnergy(ep,zn,zc); 
    
    if (ep>=er) {
      printf("Yes");
    }
    else {
      printf("No");
    }
    
  }
  else {
    printf("Time is not sufficient to complete the level by the user");
  }
  

  return 0;
}

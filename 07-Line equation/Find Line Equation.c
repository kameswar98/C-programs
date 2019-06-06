  #include <stdio.h>
    //Finding the y for x they will give 
  
  
  
  
  
  int main(){
      float p[4];
      
      //Take the input points
      printf("Enter the (x1,y1) & (x2,y2)");
      for (int i = 0; i < 4; i++){
          scanf("%d",&p[i]);
      }

      float m=(p[3]-p[1])/(p[2]-p[0]);
      printf("%d\n",m);
      printf("y=(%f)x+(%f)",m,m*p[0],p[1]);

      return 0;
  }
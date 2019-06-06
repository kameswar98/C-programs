#include<stdio.h>
float _x1,_y1,_x2,_y2;
float _x3,_y3,_x4,_y4;
float m1,c1,m2,c2;
void getPoints(){
    printf("Enter the points:\n");
    printf("Enter for (x1,y1) : ");
    scanf("%f%f",&_x1,&_y2);
    printf("Enter for (x2,y2) : ");
    scanf("%f%f",&_x2,&_y2);

    // printf("Enter the points:\n");
    // printf("Enter for (x3,y3) : ");
    // scanf("%f%f",&_x3,&_y3);
    // printf("Enter for (x4,y4) : ");
    // scanf("%f%f",&_x4,&_y4);
}

void calcSlope(){
    float up,down;
    up=(_y2-_y1);
    down=(_x2-_x1);
    printf("%f,%f",up,down);
    // m2=(_y4-_y3)/(_x4-_x3);

    printf("\n%.2f\n",m1);

}

// void calcBase(){
//     c1=_y2-(m1*_x2);
//     c1=_y4-(m2*_x4);
//     //printf("%.2f",c);
// }

void calceq1(){
    //y=m1*x+base
    // printf("y=(%f)x+%f\n",m1,c1);
    // printf("y=(%f)x+%f",m2,c2);


    //y-y1=m(x-x1) ==> y=+mx-(mX1)+(y1)
    float mx1;
    printf("y=(%.2f)x+(%.2f)",m1,(m1*_x1)+_y1);
}


int main(){
    getPoints();
    calcSlope();
    // calcBase();
    calceq1();



    return 0;
}
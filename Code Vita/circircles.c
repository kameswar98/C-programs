#include <stdio.h>
#include<stdlib.h>
#include<math.h>

#define PI 3.14159265

int main()
{
    int v1,v2,r1,r2,t;
    scanf("%d",&v1);
    scanf("%d",&r1);
    scanf("%d",&v2);
    scanf("%d",&r2);
    scanf("%d",&t);

    int dega=(v1*t)%360;
    int degb=(v2*t)%360;
    int anglee;
    anglee=abs(dega-degb);
    
    int angx=360-anglee;
    //printf("Angle :\n",dega-degb);
    int ang=(angx>anglee)?anglee:angx;
     //printf("\nangle :%d\n",ang);
      double val = PI / 180.0;
  
    float a;
    float f;
    float  ret;

    //printf("angle : %d\n,",ang);


    if(v1>0&&v2>0&&r1>0&&r2>0){
        if(r2>r1&&r2<=100){
            if(v1<=360&&v2<=360){
                if(t>0||t>=100){
                    switch(ang){
                        case 0:
                            printf("%.2f",(float)r2-r1);
                            break;
                        case 180:
                            printf("%.2f",(float)r1+r2);
                            break;
                        default:
                            ret = cos( ang*val );
                            //printf("cos val : %f\n",ret);
                            a=pow(r1,2)+pow(r2,2)-(2*r1*r2*ret);
                            f=sqrt(a);
                            printf("%.2f",f);
                            return 0;
                        }
            }
        }
    }
    }else{
        return 0;
    }

}

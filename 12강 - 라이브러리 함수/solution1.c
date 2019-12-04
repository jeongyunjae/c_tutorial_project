#include <stdio.h>
#include <math.h>
  int main(){
       double x,y;
       printf("각도를 입력하세요\n");
       scanf("%lf %lf",&x,&y);
       x=y*3.14159/180;
       printf("sin(%.0f) = %.4f\n", y, sin (x));
       printf("cos(%.0f) = %.4f\n", y, cos (x));
       printf("tan(%.0f) = %.4f\n", y, tan (x));
  }

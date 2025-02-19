#include <stdio.h>


int main() {
  int ang;
  scanf("%d",& ang);
  int a;
  if(ang<360){
    a=ang;
    if(a<90){
    printf("Acute Angle");
  }
  else if(a==90){
    printf("Right Angle");
  }
  else if(a>90 && a<180){
    printf("Obtuse Angle");
  }
  else if(a==180){
    printf("Straight Angle");
  }
  else if(a>180 && a<360){
    printf("Reflex Angle");
  }
  }
  else{
    a=ang%360;
    if(a==0){
      printf("Full Rotation");
    }
  else if(a<90){
    printf("Acute Angle");
  }
  else if(a==90){
    printf("Right Angle");
  }
  else if(a>90 && a<180){
    printf("Obtuse Angle");
  }
  else if(a==180){
    printf("Straight Angle");
  }
  else if(a>180 && a<360){
    printf("Reflex Angle");
  }
  
  }
  
  
  

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

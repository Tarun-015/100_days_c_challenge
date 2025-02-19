#include <stdio.h>
#include <string.h>

int main() {
  int m,y;
  scanf("%d",&m);
  scanf("%d",&y);
  if(m<1 || m>12){
    printf("Invalid Month\n");
  }
  if(y<1){
     printf("Invalid Year");
  }
  
  
  else if(m==2){
    if(y>0 && y%4==0){
      if(y%400==0 && y%100==0){        
        printf("29");        
      }
      else if(y%100==0 && y%400!=0){
        printf("28");
      }
      else{
        printf("29");
      }
     
    }
    else{
      printf("28");
    }
  }
  
  else if(m==1){
    printf("31");
  }
  else if(m==3){
    printf("31");
  }
  else if(m==4){
    printf("30");
  }
  else if(m==5){
    printf("31");
  }
  else if(m==6){
    printf("30");
  }
  else if(m==7){
    printf("31");
  }
  else if(m==8){
    printf("31");
  }
  else if(m==9){
    printf("30");
  }
  else if(m==10){
    printf("31");
  }
  else if(m==11){
    printf("30");
  }
  else if(m==12){
    printf("31");
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
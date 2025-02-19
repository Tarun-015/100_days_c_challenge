#include <stdio.h>

int main() {
  int X,Y,Z;
  scanf("%d",& X);
  scanf("%d",& Y);
  scanf("%d",& Z);
  if(X>=1 && Y>=1 && Z>=1){
    if(X%Y==0){
      printf("Y triumphs over X!");
    }
    else if(X%Z==0){
      printf("Z outsmarts X!");
    }
    else if(X%Y==0 && X%Z==0){
      printf("X defeats all!");
    }
    else if(X%Y!=0 || X%Z!=0){
      printf("X remains undefeated!");
    }
  }
  

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
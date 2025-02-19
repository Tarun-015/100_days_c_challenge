#include <stdio.h>

int main() {
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  printf("Lengths: [%d, %d, %d]",a,b,c);

    
  if(a+b<=c || a+c<=b || b+c<=a){
    printf("\nType: Invalid");
    printf("\nCannot form a valid shape.");
    
  }
  else if(a==b && b==c){
    printf("\nType: Equilateral");
    printf("\nAll sides are of the same length.");
    
  }
   
  else if((a==b && b!=c)||(a==c && b!=c)||(c==b && a!=c)){
    printf("\nType: Isosceles");
    printf("\nExactly two sides are equal.");
  }
  
  else if(a!=b && b!=c && c!=a){
      printf("\nType: Scalene");
      printf("\nAll sides are of different lengths.");
    }
  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
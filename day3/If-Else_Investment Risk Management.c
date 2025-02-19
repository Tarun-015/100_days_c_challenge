#include <stdio.h>
int main() {
  int a,i,r;
  scanf("%d",&a);
  scanf("%d",&i);
  scanf("%d",&r);
  if(a>50){
    if(i<=75000 || (r==1 || r==2)){      
      printf("Low Risk Portfolio: Suitable for conservative investments.");           
    }
    else if(i>75000 && r==3){
      printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
  }  
  else if(a>=30 && a<=50){
    if(i<=75000){
      if(r==2){
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
      }
      else if(r==1){
        printf("Low Risk Portfolio: Suitable for conservative investments.");
      }
      
    }
    else if(i>75000){
      if(r==1 || r==2){
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
      }
      else if(r==3){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
      }
    }
  }
  else if(a<30){
    printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
  }
  
  else if(i<=30000){
    if(r==1 || r==2){
      printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
  }       
    return 0;
}
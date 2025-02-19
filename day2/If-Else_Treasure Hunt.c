#include <stdio.h>

int main() {
  int p;
  scanf("%d",& p);
  if(p==1){
    printf("Player chooses the Left path.\n");
    int l;
    scanf("%d",& l);
    if(l==1){
      printf("Poor choice, Game Over!\n");
    }
    else if(l==2){
      printf("Player found a bridge.\n");
      int b;
      scanf("%d",&b);      
      if(b==1){
        printf("Player crosses the bridge safely.\n");
        int c;
        scanf("%d",&c);
        if(c==1){
          printf("All that glitters is not gold, Game Over!");
        }
        else if(c==2){
          printf("All your efforts were for nothing, Game Over!");
        }
        else if(c==3){
          printf("Congratulations!! You won the treasure.");
        }
        
      }
      else if(b==2){
        printf("Poor luck, Game Over!");
      }    
    }
  }
  else if(p==2){
    printf("Player chooses the Middle path.\n");
    int m;
    scanf("%d",&m);
    if(m==582){
      printf("Player solved the puzzle.\n");
      int c;
        scanf("%d",&c);
        if(c==1){
          printf("All that glitters is not gold, Game Over!");
        }
        else if(c==2){
          printf("All your efforts were for nothing, Game Over!");
        }
        else if(c==3){
          printf("Congratulations!! You won the treasure.");
        }
    }
    else{
      printf("Foolish player, Game Over!\n");
    }
  }
  else if(p==3){
    printf("Player chooses the Right path.\n");
    int r;
    scanf("%d",&r);
    if(r==30){
      printf("Player solved the puzzle.\n");
      int c;
        scanf("%d",&c);
        if(c==1){
          printf("All that glitters is not gold, Game Over!");
        }
        else if(c==2){
          printf("All your efforts were for nothing, Game Over!");
        }
        else if(c==3){
          printf("Congratulations!! You won the treasure.");
        }
    }
    else{
      printf("Foolish player, Game Over!\n");
    }
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
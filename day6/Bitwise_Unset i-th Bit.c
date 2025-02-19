#include<stdio.h>
int main(){
  int a,i;
  scanf("%d %d",&a,&i);
  a = a & (~(1<<i));
  printf("%d",a);
  return 0;
}
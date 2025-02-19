#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    if(N%2==0 && N%3==0 && N%5!=0)
        printf("A");
    else if(N==21 || N==22 || N==33 || N==35 || N==77 || N==55)
        printf("B");
    else if(N<100 && N>9 && (N%3==0 || N%7==0) && N%21!=0)
        printf("C");
    else if(N==1 || N==4 || N==9 || N==16 || N==25 || N==36 || N==49 || N==81 || N==100 || N==121 || N==144 || N==169 || N==196 || N==64)
        printf("D");
    else
        printf("E");
}
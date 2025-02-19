#include <stdio.h>
int main() {
    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses, totalCost;
    scanf("%d\n %d\n %d\n %d\n %d\n %d", &budget, &numGuests, &foodCostPerGuest, &decorationCost, &musicCost, &extraExpenses);
    if(numGuests>25 && musicCost>0)
        totalCost = numGuests*foodCostPerGuest + decorationCost + musicCost + extraExpenses;
    else
    {
        totalCost = numGuests*foodCostPerGuest + decorationCost + extraExpenses; 
        musicCost=0;
    }
    if(totalCost<=budget && numGuests>5 && numGuests<=50 && (decorationCost<0.3*budget || numGuests*foodCostPerGuest<0.5*budget))
    {
        if(numGuests>25 && musicCost==0)
            printf("Celebration Denied");
        else
            printf("Celebration Approved");
    }
    else
        printf("Celebration Denied");
}
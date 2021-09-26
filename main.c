#include <stdio.h>
#include "automotive.h"

float totalExpenses;
float totalAllowableExpenses;
float excessExpenses;
float savedAmount;

int main(){
    totalExpenses = totalTravelFee();
    printf("The total expenses for the trip are: $%.2f", totalExpenses);
    totalAllowableExpenses = totalAllowance();
    printf("The total allowable expenses for the trip are: $%.2f", totalAllowableExpenses);
    printf("The excess expenses that must be reimbursed are: $%.2f", excessExpenses);
    printf("The amount saved is: $%.2f", savedAmount);
}
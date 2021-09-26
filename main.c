#include <stdio.h>
#include "automotive.h"

float totalExpenses;
float totalAllowableExpenses;
float excessExpenses;
float savedAmount;

int main(){
    totalExpenses = totalTravelFee();
    totalAllowableExpenses = totalAllowance();
    excessExpenses = (totalExpenses - totalAllowableExpenses);
    savedAutomotiveAllowance();
    savedAmount = returnSavedParking() + returnSavedTaxi();
    printf("The total expenses for the trip are: $%.2f \n", totalExpenses);
    printf("The total allowable expenses for the trip are: $%.2f \n", totalAllowableExpenses);
    printf("The excess expenses that must be reimbursed are: $%.2f \n", excessExpenses);
    printf("The amount saved is: $%.2f", savedAmount);
}
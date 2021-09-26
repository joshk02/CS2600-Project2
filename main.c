#include <stdio.h>
#include "automotive.h"

float totalExpenses;
float totalAllowableExpenses;
float excessExpenses;
float savedAmount;

int main(){
    totalExpenses = totalTravelFee();
    totalAllowableExpenses = totalAllowance();
    printf("The total expenses for the trip are: $%.2f \n", totalExpenses);
    printf("The total allowable expenses for the trip are: $%.2f \n", totalAllowableExpenses);
    excessExpenses = (totalExpenses - totalAllowableExpenses);
    printf("The excess expenses that must be reimbursed are: $%.2f \n", excessExpenses);
    savedAutomotiveAllowance();
    savedAmount = returnSavedParking() + returnSavedTaxi();
    printf("The amount saved is: $%.2f", savedAmount);
}
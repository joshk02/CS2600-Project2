#include <stdio.h>
#include "trip_summary.h"
#include "automotive.h"

float totalExpenses;
float totalAllowableExpenses;
float excessExpenses;
float savedAmount;
  
const float Bmeal=9, Lmeal=12, Dmeal=16;

int main(){

    int total_days = 0, breakfast=0, lunch=0, dinner=0, lastDayDeparture = 0, firstDayDeparture = 0;
    float breakfastCost=0, breakfastAllowance=0, lunchCost=0, lunchAllowance=0, dinnerCost=0, dinnerAllowance=0;
    float totalMealExpense=0, mealExpenseSaved=0;
    totalDays(&total_days, &breakfast, &lunch, &dinner);

    firstDeparture(&firstDayDeparture);
    firstDayAvailability(firstDayDeparture, &breakfast, &lunch, &dinner);

    lastDeparture(&lastDayDeparture);
    lastDayAvailability(lastDayDeparture, &breakfast, &lunch, &dinner);

    breakfastAllowance = breakfast*Bmeal;
    lunchAllowance = lunch*Lmeal;
    dinnerAllowance = dinner*Dmeal;

    printf("\nYou are given %d($%.0f) breakfast, %d($%.0f) lunch, and %d($%.0f) dinner.\n\n", breakfast, breakfastAllowance,lunch, lunchAllowance, dinner, dinnerAllowance);

    breakfastCost = cost(0);
    lunchCost = cost(1);
    dinnerCost = cost(2);
    totalMealExpense = tallyExpenses(breakfastCost, breakfastAllowance, lunchCost, lunchAllowance, dinnerCost, dinnerAllowance, &mealExpenseSaved);

    printf("\nWith company coverage, employee must reimburse $%.2f for excess cost of meals\n", totalMealExpense);
    printf("You saved the company $%.2f through meal expenses.\n", mealExpenseSaved);

    totalExpenses = totalTravelFee() + breakfastCost + lunchCost + dinnerCost;
    totalAllowableExpenses = totalAllowance() + breakfastAllowance + lunchAllowance + dinnerAllowance;
    savedAutomotiveAllowance();
    savedAmount = returnSavedParking() + returnSavedTaxi() + mealExpenseSaved;
    excessExpenses = (totalExpenses - (totalAllowableExpenses - savedAmount));
    printf("The total expenses for the trip are: $%.2f \n", totalExpenses);
    printf("The total allowable expenses for the trip are: $%.2f \n", totalAllowableExpenses);
    printf("The excess expenses that must be reimbursed are: $%.2f \n", excessExpenses);
    printf("The amount saved is: $%.2f", savedAmount);
    return 0;
}
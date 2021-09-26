#include <stdio.h>
#include "trip_summary.c"

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

    return 0;
}
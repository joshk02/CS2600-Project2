#include <stdio.h>
#include <stdbool.h>
#include "trip_summary.h"

const float Bmeal=9, Lmeal=12, Dmeal=16;

int main(){

    int total_days = 0, breakfast=0, lunch=0, dinner=0, lastDayDeparture = 0, firstDayDeparture = 0;
    float breakfastCost=0, breakfastAllowance=0, lunchCost=0, lunchAllowance=0, dinnerCost=0, dinnerAllowance=0;

    totalDays(&total_days, &breakfast, &lunch, &dinner);

    firstDeparture(&firstDayDeparture);
    firstDayAvailability(firstDayDeparture, &breakfast, &lunch, &dinner);

    lastDeparture(&lastDayDeparture);
    lastDayAvailability(lastDayDeparture, &breakfast, &lunch, &dinner);

    breakfastAllowance = breakfast*Bmeal;
    lunchAllowance = lunch*Lmeal;
    dinnerAllowance = dinner*Dmeal;

    printf("You are given %d($%.0f) breakfast, %d($%.0f) lunch, and %d($%.0f) dinner.\n", breakfast, breakfastAllowance,lunch, lunchAllowance, dinner, dinnerAllowance);

    return 0;
}

void totalDays(int *total_days, int* breakfast, int* lunch, int* dinner){
    int temp=0;
    printf("How many days will you be on this trip:");
    scanf("%d", &temp);
    *total_days= *breakfast= *lunch= *dinner=temp;
}

void firstDeparture(int *firstDayDeparture){
    int temp=0;
    printf("Please enter in military for the hour of departure for first day(0-24):");
    scanf("%d", &temp);
    *firstDayDeparture=temp;
}

void lastDeparture(int *lastDayDeparture){
    int temp=0;
    printf("Please enter in military for the hour of departure for last day(0-24):");
    scanf("%d", &temp);
    *lastDayDeparture=temp;
}

void firstDayAvailability(int DayDeparture, int* breakfast, int* lunch, int* dinner){
    if(DayDeparture>=7)
        *breakfast-=1;
    if (DayDeparture>=12)
        *lunch-=1;
    if (DayDeparture>=18)
        *dinner-=1;     
}

void lastDayAvailability(int DayDeparture, int* breakfast, int* lunch, int* dinner){
    if(DayDeparture<=8)
        *breakfast-=1;
    if (DayDeparture<=13)
        *lunch-=1;
    if (DayDeparture<=19)
        *dinner-=1;     
}

void bCost(float* cost)
{
    float temp=0;
    printf("How much did you spend for breakfast:");
    scanf(%f)
}

void lCost(float* cost)
{

}

void dCost(float* cost)
{

}
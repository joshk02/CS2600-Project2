#include <stdio.h>
#include "trip_summary.h"

void totalDays(int *total_days, int* breakfast, int* lunch, int* dinner){
    int temp=0;
    printf("How many days will you be on this trip:");
    scanf("%d", &temp);
    *total_days= *breakfast= *lunch= *dinner=temp;
}

void firstDeparture(int *firstDayDeparture){
    int temp=0;

    do{
        printf("Please enter in military for the hour of departure for first day(0-24):");
        scanf("%d", &temp);

        if(temp<0||temp>24)
            printf("Incorrect input, please try again.\n\n");
    }while(temp<0||temp>24);

    *firstDayDeparture=temp;
}

void lastDeparture(int *lastDayDeparture){
    int temp=0;

    do{
        printf("Please enter in military for the hour of departure for last day(0-24):");
        scanf("%d", &temp);

        if(temp<0||temp>24)
            printf("Incorrect input, please try again.\n\n");
    }while(temp<0||temp>24);

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

float cost(int meal)
{
    float temp=0;

    if(meal==0){
        printf("How much did you spend for breakfast:");
        scanf("%f", &temp);
    }
    else if(meal==1){
        printf("How much did you spend for lunch:");
        scanf("%f", &temp);
    }
    else{
        printf("How much did you spend for dinner:");
        scanf("%f", &temp);
    }

    return temp;
}

float tallyExpenses(float breakfastCost, float breakfastAllowance, float lunchCost, float lunchAllowance, float dinnerCost, float dinnerAllowance, float* mealExpenseSaved){
    float Btemp=0,Ltemp=0,Dtemp=0, Etemp=0;
    Btemp = breakfastCost - breakfastAllowance;
    Ltemp = lunchCost - lunchAllowance;
    Dtemp = dinnerCost - dinnerAllowance;

    if(Btemp <= 0){
        Etemp += Btemp;
        Btemp=0;
    }
    if(Ltemp <= 0){
        Etemp += Ltemp;
        Ltemp=0;
    }
    if(Dtemp <= 0){
        Etemp += Dtemp;
        Dtemp=0;
    }

    *mealExpenseSaved = -Etemp;
    return(Dtemp+Ltemp+Btemp);
}
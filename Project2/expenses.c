#include <stdio.h>
#include "expenses.h"

float allowanceAmt;
float lodgingFees;
float totalAmtSaved;

//Returns the amount of any round-trip airfare
float roundAirfare(){
    float airfareCost;
    printf("Enter the amount you paid for total airfare: $");
    scanf("%f", &airfareCost);
    printf("Total amount spent on round-trip airfare: $%.2f\n\n", airfareCost);
    return airfareCost;
}

//Returns the amount of any conference or seminar registration fees
float registrationFees(){
    float registrationCost;
    printf("Enter the amount you paid for conference or seminar registration fees: $");
    scanf("%f", &registrationCost);
    printf("The total amount spent on conference or seminar registration fees: $%.2f\n\n", registrationCost);
    return registrationCost;
}

//Returns the amount of hotel expenses
float hotelFees(){

    printf("Enter the amount you paid for hotel expenses: $");
    scanf("%f", &lodgingFees);

    if(lodgingFees < 0){
        printf("Please enter a non-negative number.\n");
        printf("Enter the amount you paid for hotel expenses: $");
        scanf("%f", &lodgingFees);
    }

    return lodgingFees;
}

//Returns the amount for allowance
float allowance(){
    float daysSpent;
   
    printf("Enter the amount of days you spent at the hotel: ");
    scanf("%f", &daysSpent);

   while(daysSpent <= 0){
    printf("Please enter a number that is not zero and greater than zero.\n");
    printf("Enter the amount of days you spent at the hotel: ");
    scanf("%f", &daysSpent);
   }
    
    allowanceAmt = (daysSpent*90);

    return allowanceAmt;
}

//Returns the amount saved
float amtSaved(){

    if (lodgingFees < allowanceAmt){
        totalAmtSaved = -1*(lodgingFees-allowanceAmt);
    }

    return totalAmtSaved;
}


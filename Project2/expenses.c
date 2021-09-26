#include <stdio.h>
#include "expenses.h"

//Returns the amount of any round-trip airfare
float roundAirfare(){
    float airfareCost;
    printf("Enter the amount you paid for total airfare: $");
    scanf("%f", &airfareCost);
    printf("Total amount spent on round-trip airfare: $%.2f\n\n", airfareCost);
    return 0;
}

//Returns the amount of any conference or seminar registration fees
float registrationFees(){
    float registrationCost;
    printf("Enter the amount you paid for conference or seminar registration fees: $");
    scanf("%f", &registrationCost);
    printf("The total amount spent on conference or seminar registration fees: $%.2f\n\n", registrationCost);
    return 0;
}

//Returns the amount of hotel expenses
float hotelFees(){
    float lodgingFees;
    float outOfPocket;
    printf("Enter the amount you paid for hotel expenses: $");
    scanf("%f", &lodgingFees);
    if(lodgingFees > 90){
        outOfPocket = lodgingFees - 90;
    }
    printf("The total amount spent for hotel expenses was $%.2f, and the amount to be paid out of pocket is: $%.2f\n\n", lodgingFees, outOfPocket);
    return 0;
}
}
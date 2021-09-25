#include <stdio.h>

//Ask input amount of money that car rentals cost
float carRentals(){
    float carRentalFee;
    printf("Enter the amount you paid for car rentals: $");
    scanf("%f", &carRentalFee);
    while(carRentalFee < 0){
        printf("Please enter a non-negative number.\n");
        printf("Enter the amount you paid for car rentals: $");
        scanf("%f", &carRentalFee);
    }
    return carRentalFee;
}

//If private vehicle used, expense is $0.27 per mile driven.
float privateVehicle(){
    float privateVehicleFee;
    float milesDriven;
    printf("Enter the amount of miles you drove in your vehicle: ");
    scanf("%f", &milesDriven);
    while (milesDriven < 0){
        printf("Please enter a non-negative number.\n");
        printf("Enter the amount of miles you drove in your vehicle: ");
        scanf("%f", &milesDriven);
    }   
    privateVehicleFee = (milesDriven * 0.27);
    return privateVehicleFee;
}

//Returns the total parking fees.
float parkingFee(){
    float parkingFees;
    printf("Enter the amount parking fees paid: $");
    scanf("%f", &parkingFees);
    while(parkingFees < 0){
        printf("Please enter a non-negative number.\n");
        printf("Enter the amount parking fees paid: $");
        scanf("%f", &parkingFees);
    }
    return parkingFees;
}

//Returns The allowable parking fees paid by the company 6$/day
float parkingAllowance(){
    float daysParked;
    float parkAllowance;
    printf("Enter the amount days parked: ");
    scanf("%f", &daysParked);
    getchar();
    while(daysParked < 0){
        printf("Please enter a valid number of days that is not negative. \n");
        printf("Enter the amount days parked: ");
        scanf("%f", &daysParked);
    }
    parkAllowance = (daysParked * 6);
    return parkAllowance;
}


//Taxi fees = total amount paid - 10$/day
float taxiFee(){
    float taxiFees;
    printf("Enter the amount of taxi fees paid: $");
    scanf("%f", &taxiFees);
    while(taxiFees < 0){
        printf("Please enter a non-negative number.\n");
        printf("Enter the amount of taxi fees paid: $");
        scanf("%f", &taxiFees);
    }
    return taxiFees;
}

float taxiAllowance(){
    float taxiDays;
    float taxiAllow;
    printf("Enter the amount days that you used a taxi: ");
    scanf("%f", &taxiDays);
    while(taxiDays < 0){
        printf("Please enter a valid number of days that is not negative. \n");
        printf("Enter the amount days that you used a taxi: ");
        scanf("%f", &taxiDays);
    }
    taxiAllow = (taxiDays * 10);
    return taxiAllow;
}

//Returns the total automotive fees incurred on the trip. Fees incurred by business person.
float totalTravelFee(){
    float totalTravelFees;
    totalTravelFees = carRentals() + privateVehicle() + parkingFee() + taxiFee() ;
    return totalTravelFees;
}

//Returns the allowable expenses for the automotive fees.
float totalAllowance(){
    float totalAllow;
    totalAllow = parkingAllowance() + taxiAllowance();
    return totalAllow;
}

int main(){
    //printf("The total automotive fees are: $%.2f \n", totalTravelFee());
    //printf("The total allowance is: %.2f", totalAllowance());
}
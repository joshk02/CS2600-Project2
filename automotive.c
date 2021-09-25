#include <stdio.h>

float carRentalFee;
float privateVehicleFee;
float totalTaxiFee;
float totalParkingFee;

//Ask input amount of money that car rentals cost
float carRentals(){
    printf("Enter the amount you paid for car rentals: $");
    scanf("%f", &carRentalFee);
    printf("The car rental fee is: $%f \n", carRentalFee);
    return carRentalFee;
}

//If private vehicle used, expense is $0.27 per mile driven.
float privateVehicle(){
    float milesDriven;
    printf("Enter the amount of miles you drove in your vehicle: ");
    scanf("%f", &milesDriven);
    privateVehicleFee = (milesDriven * 0.27);
    printf("The total driving fees are: $%f", privateVehicleFee);
    return privateVehicleFee;
}

//Returns the total parking fees. Parking fees paid -6$ a day.
float parkingFee(){
    float parkingFees;
    float daysParked;
    printf("\nEnter the amount parking fees paid: $");
    scanf("%f", &parkingFees);
    printf("Enter the amount days parked: ");
    scanf("%f", &daysParked);
    totalParkingFee = (parkingFees - (6 * daysParked));
    if(totalParkingFee < 0){
        totalParkingFee = 0;
    }
    return totalParkingFee;

}
//Taxi fees = total amount paid - 10$/day
float taxiFee(){
    float taxiFees;
    float taxiDays;
    printf("Enter the amount of taxi fees paid: $");
    scanf("%f", &taxiFees);
    printf("Enter the amount days that you used a taxi: ");
    scanf("%f", &taxiDays);
    totalTaxiFee = taxiFees - (10*taxiDays);
    if(totalTaxiFee < 0){
        totalTaxiFee = 0;
    }
    return totalTaxiFee;
}

//Returns the total automotive fees incurred on the trip
float totalTravelFee(){
    float totalTravelFees;
    totalTravelFees = carRentals() + privateVehicle() + parkingFee() + taxiFee();
    return totalTravelFees;
}

int main(){
    printf("The total automotive fees are: $%.2f", totalTravelFee());
}
void firstDeparture(int *firstDayDeparture);
void lastDeparture(int *lastDayDeparture);
void firstDayAvailability(int DayDeparture, int* breakfast, int* lunch, int* dinner);
void lastDayAvailability(int DayDeparture, int* breakfast, int* lunch, int* dinner);
void totalDays(int *total_days, int* breakfast, int* lunch, int* dinner);
float cost(int meal);
float tallyExpenses(float breakfastCost, float breakfastAllowance, float lunchCost, float lunchAllowance, float dinnerCost, float dinnerAllowance, float* mealExpenseSaved);
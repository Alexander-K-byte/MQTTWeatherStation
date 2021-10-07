#include <stdio.h>

int main() {
	double temp = 0; //variable to store temperature values
	int i = 0; //counter to be used for dividing average
	double total =0; //sum of all temps to be divided by counter
	double avg =0;
//create do while loop while temp input is not equal to -128
	do {
	printf("Enter measurement:\n");
//take integer entered and assign to temp variable
	scanf("%lf", &temp);
//increase our counter by 1
	++i;
//add to our total which is used to create our avg
	total += temp;
	}
//do the above while temp value entered is not -128
	while(temp != -128);
//when -128 is entered do this code
	{
//because -128 is added to total and also counter is increased
//reverse this process by adding 128 to total and also minus 1 from our counter
		i = i - 1;
		total = total + 128;
//calculate the average temperature to 2 decimal places using %2.f 
		avg = total / i;
		printf("\n");
		printf("Average of the list values: %.2lf \n", avg);
	return 0;
	}
}
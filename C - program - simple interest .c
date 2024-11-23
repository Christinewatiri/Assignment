#include <stdio.h>
int main() {
    float principal, time, rate, simpleInterest;
    // Input: Principal, Time, and Rate
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    // Calculate Simple Interest
    simpleInterest = (principal * time * rate) / 100;
    // Output: Display the result
    printf("The Simple Interest is: %.2f\n", simpleInterest);
    return 0;
}
#include <stdio.h>
int main() {
    int age;
    double annualIncome;
    
    
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your annual income in Ksh: ");
    scanf("%lf", &annualIncome);
    
    if (age >= 21 && annualIncome >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }
    return 0;
}
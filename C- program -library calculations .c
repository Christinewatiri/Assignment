#include <stdio.h>
int main() {
    int bookID, dueDate, returnDate, overdueDays;
    int fineRate = 0;
    int fineAmount;
    
    printf("Enter the Book ID: ");
    scanf("%d", &bookID);
    printf("Enter the Due Date (as an integer): ");
    scanf("%d", &dueDate);
    printf("Enter the Return Date (as an integer): ");
    scanf("%d", &returnDate);
    
    overdueDays = returnDate - dueDate;
    
    if (overdueDays > 0) {
        if (overdueDays <= 7) {
            fineRate = 20;
        } else if (overdueDays <= 14) {
            fineRate = 50;
        } else {
            fineRate = 100;
        }
    }
    
    fineAmount = fineRate * overdueDays;
    
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Fine Rate: Ksh. %d\n", fineRate);
    printf("Fine Amount: Ksh. %d\n", overdueDays > 0 ? fineAmount : 0);
    return 0;
}

// Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ?2/day 
// Next 5 days late: ?4/day 
// Next 20 days days late: ?6/day 
// More than 30 days: Membership Cancelled.

#include <stdio.h>

int main() {
    int days_late;
    int fine = 0;

    printf("Enter the number of days late: ");
    scanf("%d", &days_late);

    if (days_late <= 5) {
        fine = days_late * 2;
    } else if (days_late <= 10) {
        fine = 5 * 2 + (days_late - 5) * 4;
    } else if (days_late <= 30) {
        fine = 5 * 2 + 5 * 4 + (days_late - 10) * 6;
    } else {
        printf("Membership Cancelled\n");
        return 0;
    }

    printf("Fine to be paid: ?%d\n", fine);
    return 0;
}


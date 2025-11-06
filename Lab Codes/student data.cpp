#include <stdio.h>
#define MAX_NAME_LEN 50

struct student {
    int roll_no;
    char name[MAX_NAME_LEN];
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n];  

    for(i = 0; i < n; i++) {
        printf("Enter roll no for student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);

        printf("Enter name for student %d: ", i + 1);
        scanf(" %[^\n]", students[i].name);  
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < n; i++) {
        printf("Student %d - Roll No: %d, Name: %s\n", i + 1, students[i].roll_no, students[i].name);
    }

    return 0;
}


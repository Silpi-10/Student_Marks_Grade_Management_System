#include <stdio.h>
#include <stdlib.h>

// Function to calculate total marks
int calculate_total(int marks[], int num_subjects) {
    int total = 0;
    for (int i = 0; i < num_subjects; i++) {
        total += marks[i];
    }
    return total;
}

// Function to calculate average marks
float calculate_average(int total, int num_subjects) {
    return (float) total / num_subjects;
}

// Function to calculate grade based on average
const char* calculate_grade(float average) {
    if (average >= 90)
        return "A";
    else if (average >= 75)
        return "B";
    else if (average >= 60)
        return "C";
    else if (average >= 40)
        return "D";
    else
        return "Fail";
}

int main() {
    int marks[5];
    int num_subjects = 5;
    char subjects[5][20] = {"Math", "Physics", "Chemistry", "English", "Computer"};

    printf("Enter marks for 5 subjects (out of 100):\n");

    for (int i = 0; i < num_subjects; i++) {
        printf("%s: ", subjects[i]);
        scanf("%d", &marks[i]);

        // Input validation
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid input! Marks should be between 0 and 100.\n");
            i--; // Repeat current subject input
        }
    }

    int total = calculate_total(marks, num_subjects);
    float average = calculate_average(total, num_subjects);
    const char* grade = calculate_grade(average);

    // Output
    printf("\n----- Student Report -----\n");
    for (int i = 0; i < num_subjects; i++) {
        printf("%s: %d\n", subjects[i], marks[i]);
    }
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %s\n", grade);
    system("pause");
    return 0;
}

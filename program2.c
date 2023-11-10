#include <stdio.h>
#include <stdlib.h>

int getStudentGrade();
void clearInputBuffer();

int main(int argc, char argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number_of_students>\n", argv[0]);
        return 1;
    }

    int numStudents = atoi(argv[1]);
    if (numStudents <= 0) {
        printf("Please enter a valid number of students.\n");
        return 1;
    }

    intstudentGrades = (int )malloc(numStudents sizeof(int));
    if (studentGrades == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < numStudents; i++) {
        printf("Enter the grade for student %d: ", i + 1);
        studentGrades[i] = getStudentGrade();
    }

    printf("Student Grades:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d grade: %d\n", i + 1, studentGrades[i]);
    }

    free(studentGrades);
    return 0;
}

int getStudentGrade() {
    int grade;
    if (scanf("%d", &grade) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        clearInputBuffer();
        return getStudentGrade();
    }
    clearInputBuffer(); // Clear any additional characters in the input buffer.
    return grade;
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

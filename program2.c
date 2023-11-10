 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

  int get_student_grade();
  int validate_and_get_num_items(const char *input);

  int main(int argc, char *argv[]) {
      if (argc != 2) {
          printf("Usage: %s <number_of_students>\n", argv[0]);
          return (-1);
      }

      int *student_grades;
      unsigned int num_items = validate_and_get_num_items(argv[1);

      if (num_items == 0) {
          printf("Invalid number of students.\n");
          return -1;
      }

      student_grades = (int *)malloc(num_items * sizeof(int));

      if (student_grades == NULL) {
          printf("Could not allocate memory.\n");
          return -1;
      }

      for (unsigned int ctr = 0; ctr < num_items; ctr++) {
          printf("\nPlease input student %u's grade: ", ctr);
          student_grades[ctr] = get_student_grade();
      }

      for (unsigned int ctr = 0; ctr < num_items; ctr++) {
          printf("Student %u grade: %d.\n", ctr, student_grades[ctr]);
      }

      free(student_grades);
      return 0;
  }

  int validate_and_get_num_items(const char *input) {
      int num_items = atoi(input);

      if (num_items <= 0) {
          return 0; // Invalid input
      }

      return num_items;
  }

  int get_student_grade() {
      int grade;
      int result = scanf("%d", &grade);

      if (result == EOF) {
          return 0; // EOF reached
      }

      if (result == 0) {
          while (fgetc(stdin) != '\n')
              ;
          return 0; // Invalid input
      }

      return grade;
  }

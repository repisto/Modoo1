// utils.c
#include "utils.h"
void get_average(int **arr, int num_of_student, int num_of_subject) {
  int sum = 0;
  for (int i = 0; i < num_of_subject; i++) {
    sum = 0;
    for (int j = 0; j < num_of_student; j++) {
      sum += arr[i][j];
    }
    printf("average score of subject %d: %d\n", i, sum / num_of_student);
  }
}

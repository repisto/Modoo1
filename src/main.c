// main.c
#include <stdio.h>
#include <stdlib.h>
#include <utils.h>

int main(int argc, char **argv) {
  int num_of_subject = 0;
  printf("Input number of subject: ");
  scanf("%d", &num_of_subject);

  int num_of_student = 0;
  printf("Input number of student: ");
  scanf("%d", &num_of_student);

  // I make arr[num_of_subject][num_of_student].
  int **arr = (int **)malloc(sizeof(int *) * num_of_subject);
  int score_input = 0;
  for (int i = 0; i < num_of_subject; i++) {
    arr[i] = (int *)malloc(sizeof(int) * num_of_student);
  }

  for (int i = 0; i < num_of_subject; i++) {
    printf("score of subject %d ------\n", i);

    for (int j = 0; j < num_of_student; j++) {
      printf("Input score of student %d: ", j);
      scanf("%d", &score_input);
      arr[i][j] = score_input;
    }
  }

  get_average(arr, num_of_student, num_of_subject);

  for (int i = 0; i < num_of_subject; i++) {
    free(arr[i]);
  }
  free(arr);

  return 0;
}

#include "common_utils.h"
#include <stdio.h>

void print_result(const char *operation, double result) {
  printf("%s Result -> %.2f\n", operation, result);
}

double read_input(const char *prompt) {
  double num;
  printf("%s", prompt);
  scanf("%lf", &num);
  return num;
}
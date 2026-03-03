#include <stdio.h>
#include "common_utils.h"
#include "math_utils.h"

int main(int argc, char *argv[]) {
    printf("Hello, World!\n");
    print_result("add", add(1, 2));
    print_result("subtract", subtract(1, 2.0));
    return 0;
}

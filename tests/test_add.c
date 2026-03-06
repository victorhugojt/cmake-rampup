#include <assert.h>
#include "math_utils.h"

int main(int argc, char *argv[]) {
    assert(add(1, 2) == 3);
    assert(add(0, 0) == 0);
    assert(add(-1, 1) == 0);
    assert(add(100, 200) == 300);
    return 0;
}

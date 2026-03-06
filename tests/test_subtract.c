#include <assert.h>
#include "math_utils.h"

int main(int argc, char *argv[]) {
    assert(subtract(1, 2) == -1);
    assert(subtract(10, 3) == 7);
    assert(subtract(0, 5) == -5);
    assert(subtract(100, 50) == 50);
    return 0;
}

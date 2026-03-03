#include <stdio.h>
#include <assert.h>
#include "common.h"

int main(int argc, char *argv[]) {
    assert(add(1, 2) == 3);
    assert(subtract(1, 2) == -1);
    return 0;
}
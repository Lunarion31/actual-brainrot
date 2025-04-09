#include "mlalog.h"

int main() {
    int *ptr = NULL;
    if (!ptr) {
        MLA_ERROR("Null pointer dereference attempted");
    }

    return 0;
}

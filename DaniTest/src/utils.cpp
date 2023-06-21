#include "utils.hpp"

void checkAllocate(void *pointer) {
    if (!pointer) {
        cout << "Critical error has occurred!" << endl;
        exit(EXIT_FAILURE);
    }
}
#include <stdint.h>

void meow(void) {
    printf("meow\n");
}

int main(void) {
    for (int i = 0; i < 50; i++) {
        meow();
    }
}
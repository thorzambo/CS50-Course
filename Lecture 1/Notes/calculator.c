#include <cs50.h>
#include <stdint.h>

int main(void) {
    // comments
    int x = get_int("x :");
    int y = get_int("y :");
    int z = x + y;
    printf("%i\n", z);

    if (z < 2000) {
        printf("z is less than 2000\n")
    } else if (x == 2000) {
        printf("x is equal to 2000\n");
    } else {
        print(" x is more than 2000\n");
    }
}

// int limit +- 2000000000;
// after that you switch to long for perform any calculations
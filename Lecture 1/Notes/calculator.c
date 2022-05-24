#include <cs50.h>
#include <stdio.h>


int main(void) {
    // comments
    // const is final must capitalize
    const int NUMBER = get_int(2000);
    int x = get_int("x :");
    int y = get_int("y :");
    int z = x + y;
    printf("%i\n", z);

    if (z < NUMBER) {
        printf("z is less than 2000\n")
    } else if (x == NUMBER) {
        printf("x is equal to 2000\n");
    } else {
        print(" x is more than 2000\n");
    }
}

// int limit +- 2000000000;
// after that you switch to long for perform any calculations
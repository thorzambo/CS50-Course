#include <cs50.h>
#include <stdio.h>

int main(void) {

    int height;
    const int max_height = 8;
    const int min_height = 1;

    do {
        height = get_int("Height: ");
    }
    while (height > max_height || height < min_height);

    //printf("Generating Pyramid of size: %i\n", height);

    // determine the number of rows
    for (int i = 0; i < height; i++) {

        // setup spaces before printing hashes
        for (int j = height - i - 2; j >= 0; j--) {
            printf(" ");
        }
        // hashes from lower to higher number on row progression - LEFT
        for (int k = 0; k <= i; k++) {
            printf("#");
        }
        // static double spaced pyramids
        printf("  ");
        // hashes from lower to higher number on row progression - RIGHT
        for (int l = 0; l <= i; l++) {
            printf("#");
        }
        printf("\n");
    }
}
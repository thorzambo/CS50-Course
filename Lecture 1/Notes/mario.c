#include <stdio.h>
#include <cs50.h>

int main(void) {

    // must input positive value not 0 or under
    int n;
    do {
        n = get_int("Width ");
    }
    while (n < 1);

    //alternatively
    int n;
    while(true) {
        n = get_int("Height ");
        if (n > 0) {
            break;
        }
    }

    // for each row
    for (int i = 0; i < n; i++) {

        // for each column
        for (int j = 0; j < n; j++) {

            // print brick
            print("#");
        }
        // move to next row
        printf("\n");

    }
}


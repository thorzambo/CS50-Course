
#include <stdio.h>


int main(void) {

    int n = get_int("n: ");

    // if n is even
    if  (n % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
}
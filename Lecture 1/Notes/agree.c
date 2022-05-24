#include <cs50.h>
#include <stdio.h>


int main(void) {

    get_string("response ");

    // if want to save\get repsosne

    int i = get_string("response ");
    char j = get_char("response ");
    char  f[20] = get_string("response ");

    // double quotes = "" string, '' single quotes for char

    if (j == 'y' || j == 'Y') {
        printf("yes");
    } else if (j == 'n'|| j == 'N') {
        printf("no");
    } else {
        printf("ignored");
    }
}
#include <cs50.h>
#include <stdio.h>


float discout(float price, int percentage);

int main(void) {
    float regular = get_float("Regular price: ");
    int percent_off = get_int("Percent off: ");
    float sale = discount(regular, percent_off);
    printf("Sale price: %.2f\n", sale);
}

float discout(float price, int percentage) {
    return price * ((100-percentage) / 100);
}
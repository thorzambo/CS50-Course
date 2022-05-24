#include <cs50.h>
#include <stdint.h>

float discout(float price);

int main(void) {
    float regular = get_float("Regular price: ");
    float sale = discount(regular);
    printf("Sale price: %.2f\n", sale);
}

float discout(float price) {
    return price * .85;
}
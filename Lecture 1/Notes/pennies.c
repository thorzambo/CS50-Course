#include <cs50.h>
#include <math.h>
#include <stdio.h>


int main(void) {
    float amount = get_float(" insert decimal amount ");
    int pennies = round(amount * 100); // math library round
    printf("Pennies: %i\n", pennies);
}
#include <stdio.h>


// to use it before declaration
void baw(void);

void meow(int x) {
    for (int i = 0; i < x; i++) {
        printf("Meow\n");
    }
}




int main(void) {
    for (int i = 0; i < 50; i++) {
        meow(3);
    }

    int i = 0;
    while (i < 30) {
        baw();
        i++;
    }
}












// notice has been declared on the top of the file and used into main function
void baw(void) {
    printf("Baw\n");
}

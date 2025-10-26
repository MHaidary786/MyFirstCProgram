#include <stdio.h>
#include "FToC.h"
#include "BoxText.h"

/*int main(void) {
    printf("Hello, World!\n");
    return 0;
}*/


int main (void) {
    // float tempC = Fahrenheit_to_Cesius();
    // printf("Temp in C is: %.2f", tempC);

    // Print_text_in_box("Hello, World!");

    printf("\n");

    Multiplication_table();
    printf("\n");
    TestingPointers();

    int x = 20;
    int y = 30;

    Swap(&x, &y);

    printf("x: %d | y: %d", x, y);
}
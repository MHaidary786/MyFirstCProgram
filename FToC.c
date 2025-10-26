//
// Created by mahdi on 10/26/25.
//

#include <stdio.h>

float Fahrenheit_to_Cesius(void) {
    printf("Please enter a temp valu ein F: ");

    float tempF;
    scanf("%f", &tempF);

    float tempC = (tempF - 32.0) * 5.0 / 9.0;
    return tempC;
}
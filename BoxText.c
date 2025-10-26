//
// Created by mahdi on 10/26/25.
//
#include <stdio.h>
#include <string.h>

void Print_text_in_box(char text[]) {
    int len = strlen(text) + 4;

    for (int i = 0; i < len; i++) {
        printf("%s", "*");
    }

    printf("\n* ");

    printf("%s", text);

    printf(" * \n");

    for (int i = 0; i < len; i++) {
        printf("%s", "*");
    }

}

void Multiplication_table(void) {
    int n = 10;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%3d ", i * j);
        }
        printf("\n");
    }
}

void TestingPointers(void) {
    int n = 56;

    int *p = &n;

    *p = 22;

    printf("%d\n", n);
    printf("%d\n", *p);
}

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}




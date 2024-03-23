#include <stdio.h>

int main(void) {
    int block = 5;

    for (int i = 0; i < block; i++) {
        printf("#");
        for (int j = 0; j < block; j++) {
            printf("#");
        }
        printf("\n");
    }
}
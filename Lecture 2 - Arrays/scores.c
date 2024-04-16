#include <stdio.h>

const int N = 3;

float average(int scores[N]);

int main(void) {
    int scores[3] = {73, 72, 33};

    printf("Average score: %f\n", average(scores));
}

float average(int scores[N]) {
    float sum = 0;
    for (int i = 0; i < N; i++) {
        sum += scores[i];
    }
    return sum / N;
}
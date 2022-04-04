#include <stdio.h>

float arithmetic_series_sum(int a1, int n, int d) {
    return ( ((float)n/2)*(2*a1 + (n-1)*d) );
}

int main() {

    float sum = (arithmetic_series_sum(3, 333, 3) + arithmetic_series_sum(5, 199, 5)) - arithmetic_series_sum(15, 66, 15);
    printf("Sum is: %d\n", (int)sum);

    return 0;
}
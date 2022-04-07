#include <stdio.h>

float sum_of_squares(int n) {
    return (n*(n+1)*((2*n)+1))/6;
}

float square_of_sums(int n) {
    return ((n*(n+1))/2)*((n*(n+1))/2);
}

int main() {
    float difference = square_of_sums(100) - sum_of_squares(100);
    // printf("[!]SUM OF SQUARES: %f\n", sum_of_squares(10));
    // printf("[!]SQUARE OF SUMS: %f\n", square_of_sums(10));
    printf("Difference is: %d\n", (int)difference);
    return 0;
}
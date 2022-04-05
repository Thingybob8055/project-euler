#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int num_of_digits (int n) {
    int r = 1;
    if (n < 0) n = (n == INT_MIN) ? INT_MAX: -n;
    while (n > 9) {
        n /= 10;
        r++;
    }
    return r;
}

int array_to_int(int a[], int n) {
    int i, k = 0;
    for (i = 0; i < n; i++)
        k = 10 * k + a[i];
    return k;
}

bool isPalindrome(int product) {
    int n = product;
    int normal_num = product;
    int div = 10;
    int array_size = num_of_digits(product);
    int i = 0;
    int reverse_num_arr[array_size];
    while(product/div != 0) {
        reverse_num_arr[i] = n%div;
        // printf("[!]reversed = %d\n", reverse_num_arr[i]);
        n = n/div;
        i = i + 1;
    }
    int reversed_number = array_to_int(reverse_num_arr, array_size);
    // printf("[!]Reversed num: %d\n", reversed_number);
    // printf("[!]Normal num: %d\n", normal_num);
    return normal_num == reversed_number;
}

int main() {

    int max_product = 1;
    int product = 1;

    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            product = i*j;
            if (product > max_product) {
                if(isPalindrome(product)) {
                    max_product = product;
                }
            }
        }
    }

    printf("Max Product is: %d\n", max_product);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    long number = 600851475143;
    int max = 1;
    int sqrt_number = (int)round(sqrt(number)); // 9
    //printf("[!]Rounded value: %d\n", sqrt_number);
    int *prime_factor_decomp;
    prime_factor_decomp = (int *)malloc(100 * sizeof(int));
    int counter = 0;
    int number_array[sqrt_number - 2];
    for(int i = 2; i <= sqrt_number; i++) {
        number_array[i-2] = i;
        // printf("%d \n", number_array[i]);
    }

    for(int i = 0; i<=sqrt_number-2; i++) {
        //printf("%d \n", number_array[i]);
        if(number % number_array[i] == 0) {
            while(1) {
                if(number % number_array[i] == 0) {
                    number = number/number_array[i];
                }
                else {
                    *(prime_factor_decomp + counter) = number_array[i];
                    //printf("%d\t", *(prime_factor_decomp + counter));
                    counter += 1;
                    break;
                }
            } 
        }
    }

    printf("Max Prime Factor is: %d", *(prime_factor_decomp + sizeof *prime_factor_decomp-1));

    free(prime_factor_decomp);

   printf("\n");
    return 0;
}


    // for(int i = 0; i<=sqrt_number; i++) {
    //     if(number % number_array[i] == 0) {
    //         printf("%d ! \n", number_array[i]);
    //         while (1) {
    //             int exp_count = 0;
    //             if(number % (int)(pow(number_array[i], exp_count++)) == 0 && (number_array[i] != 0)) {
    //                 printf("[][]%d\n" number_array[i]);
    //                 number_array[i] = 0;
    //             }
    //             else {
    //                 printf("%d", exp_count);
    //                 number = number/pow(number_array[i], exp_count - 1);
    //                 prime_factor_decomp[i] = number_array[i];
                    
    //                 break;
    //             }
    //         }
            
    //     }
    
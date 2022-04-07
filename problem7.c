#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool IsPrime(int n) {
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main() {
    
    int number = 2;
    int counter = 0;

    while(1) {
        if(IsPrime(number)) {
            counter +=1;
            if(counter == 10001)
                break;
            number += 1;
            //printf("[!] %d\n", number);
            continue;
        }
        else {
            number += 1;
            //printf("[!!]%d\n", number);
            continue;
        }
    }

    printf("Prime number is: %d\n", number);

    return 0;
}
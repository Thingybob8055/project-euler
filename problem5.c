#include <stdio.h>

int main() {

    int n = 1;
    for(int i = 1; i<=20; i++) {
        if (n%i == 0) {
            continue;
        }
        else {
            n = n+1;
            i = 0;
            continue;
        }
    }

    printf("%d\n", n);

    return 0;
}
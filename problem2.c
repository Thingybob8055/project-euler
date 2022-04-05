#include <stdio.h>

int main() {
    int n;
    int a = 0;
    int b = 1;
    int c;
    int sum = 0;
    //printf("%d %d ", a, b);

    while(1) {
        c = a + b;    // c = 1 + 2 = 3
        if (c >= 4000000) {
            break;
        }
        a = b;        // a becomes 2
        b = c;        // b becomes 3
        if (c %2 == 0) {
            sum += c;
        }
    }

    printf("SUM IS: %d\n", sum);
    return 0;
}

 // 0, 1, 1, 2 , 3, 5, 8, 13, 21.......
   //0 + 1 = 1
   //1 + 1 = 2
   //2 + 1 = 3
   //3 + 2 = 5
   //5 + 3 = 8
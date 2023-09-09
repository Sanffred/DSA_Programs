/* 
    SANFFRED JOJU
    ROLL NUMBER - 09
    BATCH - A
*/

// PROGRAM TO CHECK IF A GIVEN NUMBER IS A PART OF FIBONACCI NUMBER SERIES

#include <stdio.h>

int isFibonacci(int n) {
    if (n <= 1) {
        return 1; // 0 and 1 are part of the Fibonacci series
    }

    int a = 0, b = 1, c;

    while (b < n) {
        c = a + b;
        a = b;
        b = c;
    }

    return (b == n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isFibonacci(num)) {
        printf("%d is part of the Fibonacci series.\n", num);
    } else {
        printf("%d is not part of the Fibonacci series.\n", num);
    }

    return 0;
}

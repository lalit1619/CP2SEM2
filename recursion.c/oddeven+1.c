#include <stdio.h>

void odd(int a, int n); // Forward declaration

void even(int a, int n) {
    if (a <= n) {
        printf("%d ", a - 1); // Print even number as even - 1
        odd(a + 1, n); // Call odd for the next number
    }
}

void odd(int a, int n) {
    if (a <= n) {
        printf("%d ", a + 1); // Print odd number as odd + 1
        even(a + 1, n); // Call even for the next number
    }
}

int main() {
    int n = 10; // Assuming you want to print numbers from 1 to 10
    int a = 1;
    odd(a, n);
    return 0;
}

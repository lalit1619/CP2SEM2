#include<stdio.h>

int kth(int *a, int *b, int *ah, int *bh, int k) {
    if (a == ah) {
        return b[k];
    }
    if (b == bh) {
        return a[k];
    }

    int mid1 = (ah - a) / 2;
    int mid2 = (bh - b) / 2;

    if (mid1 + mid2 < k) {
        if (a[mid1] > b[mid2]) {
            return kth(a, b + mid2 + 1, ah, bh, k - mid2 - 1);
        }
        else {
            return kth(a + mid1 + 1, b, ah, bh, k - mid1 - 1);
        }
    }
    else {
        if (a[mid1] > b[mid2]) {
            return kth(a, b, a + mid1, bh, k);
        }
        else {
            return kth(a, b, ah, b + mid2, k);
        }
    }
}

int main() {
    int A[5] = {1, 3, 5, 7, 9};
    int B[5] = {2, 4, 6, 8, 10};
    int k = 10;
    int ans = kth(A, B, A + 5, B + 5, k - 1); 
    printf("%d", ans);
    return 0;
}

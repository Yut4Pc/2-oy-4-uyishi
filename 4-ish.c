#include <stdio.h>

int findMax(int *a, int *b) {
    if (*a > *b) {
        return *a;
    } else {
        return *b;
    }
}

int main() {
    int a, b;

    printf("Ikkita son kiriting: ");
    scanf("%d %d", &a, &b);

    printf("Eng katta son = %d", findMax(&a, &b));

    return 0;
}
#include <stdio.h>

float average(int *a, int *b, int *c) {
    return (*a + *b + *c) / 3.0;
}

int main() {
    int a, b, c;

    printf("Uchta son kiriting: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("O'rtacha = %.2f", average(&a, &b, &c));

    return 0;
}
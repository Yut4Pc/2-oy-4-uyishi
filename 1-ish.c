#include <stdio.h>

void square(int *n) {
    *n = (*n) * (*n);
}

int main() {
    int n;

    printf("Son kiriting: ");
    scanf("%d", &n);

    square(&n);

    printf("Kvadrat = %d", n);

    return 0;
}
#include <stdio.h>

void cube(int *n) {
    *n = (*n) * (*n) * (*n);
}

int main() {
    int n;

    printf("Son kiriting: ");
    scanf("%d", &n);

    cube(&n);

    printf("Kub = %d", n);

    return 0;
}
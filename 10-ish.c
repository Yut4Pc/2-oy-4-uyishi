#include <stdio.h>

int main() {
    int arr[5] = {12, 45, 7, 89, 23};
    int *p = arr;
    int min = *p;

    for (int i = 1; i < 5; i++) {
        if (*(p + i) < min) {
            min = *(p + i);
        }
    }

    printf("Eng kichik = %d", min);

    return 0;
}
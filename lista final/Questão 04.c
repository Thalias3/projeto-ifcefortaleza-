#include <stdio.h>

int main() {
    int i;

    printf("Números ímpares de 1 a 100:\n");

    for (i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

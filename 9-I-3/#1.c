#include <stdio.h>
#include <stdbool.h>

bool isNatural(const int num) {
    return num > 0;
}

bool isValidTriangle(const int side, const int base) {
    return side * 2 > base && base > 0 && side > 0 && base % 2 != 0;
}

int main() {
    int side1, side2;

    if (scanf("%d %d", &side1, &side2) != 2) {
        printf("NO\n");
        return 0;
    }

    if (!isNatural(side1) || !isNatural(side2)) {
        printf("NO\n");
        return 0;
    }

    const int side = side1 > side2 ? side2 : side1;
    const int base = side1 > side2 ? side1 : side2;

    if (!isValidTriangle(side, base)) {
        printf("NO\n");
        return 0;
    }

    int height = side;

    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }

        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }

        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}

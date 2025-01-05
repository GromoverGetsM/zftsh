#include <stdio.h>

void counter(const int x) {
    if (x < 0) {
        printf("Введено отрицательное число\n");
        return;
    }

    int digits[10] = {0};
    char string[12];

    sprintf(string, "%d", x);

    for (int i = 0; string[i] != '\0'; i++) {
        digits[string[i] - '0']++;
    }

    for (int i = 0; i < 10; i++) {
        if (digits[i] > 0) {
            printf("Количество %d - %d\n", i, digits[i]);
        }
    }
}

int main() {
    int x;
    scanf("%d", &x);

    counter(x);

    return 0;
}

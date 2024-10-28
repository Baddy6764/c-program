#include <stdio.h>

int main() {
    const int price = 5;
    const int quality = 2;
    const float sum = (float) price / quality;

    printf("%.1f", sum);

    return 0;
};


#include <stdio.h>

int main() {
    int a = 0;

    while(a < 5) {
        printf("%d\n\n", a);
        a++;
    };

    int i = 0;

    do {
        printf("%d\n", i);
        i++;
    }
    while (i < 10);

    return 0;
};
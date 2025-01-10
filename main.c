#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countBit(const int n) {
    int count = 0;
    if (n == 0)
        return 0;
    for (int i = 0; i < 32; i++) {
        if ((1 << i) & n)
            count = i;
    }

    return ++count;
}

int main(const int argc, char **argv) {
    if (argc < 2 || argv[1] == NULL) {
        fprintf(stderr, "This program requires an argument\n");
        return -1;
    }

    int num = atoi(argv[1]);

    int arr[countBit(num)];
    int idx = 0;

    while (num != 0) {
        arr[idx] = num % 2;
        idx += 1;

        if (num == 1) {
            break;
        }
        num /= 2;
    }

    for (int i = idx - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}

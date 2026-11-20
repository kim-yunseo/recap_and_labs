#include <stdio.h>
int main() {
    for (int i = 1; i <= 12; i += 4) {
        printf("%d단\t\t", i);
        printf("%d단\t\t", i+1);
        printf("%d단\t\t", i+2);
        printf("%d단\n", i+3);
        for (int j = 1; j <= 9; j++) {
            printf("%d x %d = %d\t", i, j, i * j);
            printf("%d x %d = %d\t", i + 1, j, (i + 1) * j);
            printf("%d x %d = %d\t", i + 2, j, (i + 2) * j);
            printf("%d x %d = %d\n", i + 3, j, (i + 3) * j);
        }
        printf("\n");
    }
    return 0;
}
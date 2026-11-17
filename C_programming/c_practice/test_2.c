#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	for (int i = 2; i <= 9; i++) {
		printf("%d단 ", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
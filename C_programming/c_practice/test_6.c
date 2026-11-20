#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b;
	printf("숫자를 입력하세요: ");
	scanf("%d", &a);
	printf("숫자를 입력하세요: ");
	scanf("%d", &b);
	int p = pul(a, b);
	int m = mul(a, b);
	printf("두 수의 합: %d\n", p);
	printf("두 수의 곱: %d", m);

	return 0;
}

int pul(a, b) {
	return a + b;
}

int mul(a, b) {
	return a * b;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b;int m;
	printf("숫자를 입력하세요: ");
	scanf("%d", &a);
	printf("숫자를 입력하세요: ");
	scanf("%d", &b);
	if (a > b) {
		while (a&&b)
		{
			m = b;
			b = a % b;
			a = m;
		}
		printf("최대공약수: %d", a);
	}
	else {
		while (a && b)
		{
			m = a;
			a = b % a;
			b = m;
		}
		printf("최대공약수: %d", b);
	}

	return 0;
}
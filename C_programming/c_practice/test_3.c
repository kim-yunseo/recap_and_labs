#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int age;
	printf("나이를 입력하세요: ");
	scanf("%d", &age);

	if (20 < age) {
		printf("성인");
	}
	else if (8 > age) {
		printf("어린이");
	}
	else {
		printf("청소년");
	}

	return 0;
}
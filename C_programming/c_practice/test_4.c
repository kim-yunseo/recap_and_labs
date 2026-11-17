#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int fe;
	int sc;
	printf("첫번쨰 숫자 입력: ");
	scanf("%d", &fe);
	printf("두번쨰 숫자 입력: ");
	scanf("%d", &sc);
	int re = (fe>sc) ? printf("두수의 차: %d\n첫번째 수가 더 큽니다.",fe-sc) : printf("두수의 차: %d\n두번째 수가 더 큽니다.", sc - fe);
	return 0;
}
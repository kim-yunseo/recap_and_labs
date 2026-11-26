#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int num) {
	for (int i = num;i > 0;i--) {
		if (i > 1) {
			printf("%d + ", num);
			return num + sum(num - 1);
		}
		else
		{
			printf("%d = ", num);
			return 1;
		}
	}

}



int main() {
	int num = 0;
	int sum_re = 0;
	printf("정수 입력 : ");
	scanf("%d", &num);
	printf("==============================\n");
	sum_re = sum(num);
	printf("%d\n", sum_re);
	printf("==============================\n");
	printf("1~%d까지의 합 : %d", num, sum_re);
}
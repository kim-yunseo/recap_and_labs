#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){

	int n;
	printf("원하는 단을 입력해 주세요: ");
	scanf("%d", &n);
	switch (n)
	{

	case(2):
		printf("%d단\n", n);
		for (int i = 1; i <= 9; i++) {
			printf("%d * %d = %d", n, i, i * n);
			printf("\n");
		}

		break;

	case(3):
		printf("%d단\n", n);
		for (int i = 1; i <= 9; i++) {
			printf("%d * %d = %d", n, i, i * n);
			printf("\n");
		}

		break;

	case(4):
		printf("%d단\n", n);
		for (int i = 1; i <= 9; i++) {
			printf("%d * %d = %d", n, i, i * n);
			printf("\n");
		}

		break;

	case(5):
		printf("%d단\n", n);
		for (int i = 1; i <= 9; i++) {
			printf("%d * %d = %d", n, i, i * n);
			printf("\n");
		}

		break;

	case(6):
		printf("%d단\n", n);
		for (int i = 1; i <= 9; i++) {
			printf("%d * %d = %d", n, i, i * n);
			printf("\n");
		}

		break;

	case(7):
		printf("%d단\n", n);
		for (int i = 1; i <= 9; i++) {
			printf("%d * %d = %d", n, i, i * n);
			printf("\n");
		}

		break;

	case(8):
		printf("%d단\n", n);
		for (int i = 1; i <= 9; i++) {
			printf("%d * %d = %d", n, i, i * n);
			printf("\n");
		}

		break;

	case(9):
		printf("%d단\n", n);
		for (int i = 1; i <= 9; i++) {
			printf("%d * %d = %d", n, i, i * n);
			printf("\n");
		}

		break;

	default:
		printf("1~9단중에 하나를 입력해 주세요.");

	}

	return 0;
}

#include<stdio.h>

int main() {
	void Print(int, char);
	int n;
	char a;
	printf("숫자, 문자 : ");
	scanf_s("%d %c", &n, &a);
	Print(n, a);

	return 0;

}
void Print(int n, char a) {
	
	if (n % 2 == 1) {
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j < i; j++) {
				printf("%c",a);
			}
			printf("\n");
		}
	}
	else if (n % 2 == 0) {
		for (int i = 1; i <= n; i++) {
			for (int j = n; j >= i; j--) {
				printf("%c",a);
			}
			printf("\n");
		}
	}

}
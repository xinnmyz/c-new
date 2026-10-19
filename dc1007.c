#include <stdio.h>
int main() {
	int x, y;
	scanf("%d", &x);
	if (x < 1) {
		y = x;
	}
	if (1 <= x &&x< 10) {
		y = x * 2 - 1;
	}
	if (x >= 10) {
		y = x * 3 - 11;
	}
	printf("%d", y);
	return 0;
}
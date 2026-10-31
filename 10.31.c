#include <stdio.h>
int main() {

	int a = 123;
	printf("12345678901234567890\n");
	printf("%d\n", a);
	printf("%6d\n", a);
	printf("%-6d000000\n", a);
	printf("%6.7d\n", a);
	printf("%6.4d\n", a);
	printf("%+6.7d\n", a);
	printf("%-6.7d\n", a);
	printf("%+06.7d\n", a);
	return 0;
}
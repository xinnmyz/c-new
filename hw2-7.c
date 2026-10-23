#include <stdio.h>
int main() {
    int n;
    int x, y, z;
    scanf("%d", &n);
    x = n / 100;
    y = (n - x * 100) / 10;
    z = n - x * 100 - y * 10;
    printf("%d %d %d", x, y, z);
    return 0;

}
#include<stdio.h>
int main()
{

    int n;
    int k = 0;
    int sum = 0;
    int e;
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        scanf("%d", &k);
        sum += k;
    }
    e = sum / n;
    printf("%d", e);
    return 0;
}
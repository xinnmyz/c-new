#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    double e;
    int age = 0;

    scanf("%d", &n);

    for (int i = 0;i < n;i++) {
        scanf("%d", &age);
        sum = sum + age;
    }
    e = (double)sum / n;
    printf("%.2f", e);

    return 0;
}
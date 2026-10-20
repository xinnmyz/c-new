#include<stdio.h>
int main()
{
    double salary = 0;
    double sum = 0;
    double e;
    for (int i = 0;i < 12;i++) {
        scanf("%lf", &salary);
        sum += salary;
    }
    e = sum / 12;
    printf("$%.2f", e);
    return 0;
}
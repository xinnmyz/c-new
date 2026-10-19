#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int c = a % 2;
    if (c == 1) {
        printf("odd");
    }
    else {
        printf("even");
    }
    return 0;
}
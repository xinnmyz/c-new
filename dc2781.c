#include<stdio.h>
int main()
{
    char a;
    int b;
    scanf("%c", &a);
    b = a % 2;

    if (b == 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
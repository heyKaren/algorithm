#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%.9f", (double)a/b);
    return 0;
}

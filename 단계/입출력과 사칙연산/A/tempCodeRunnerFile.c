#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a;
    float b;

    scanf("%f %f", &a, &b);
    printf("%.9f", a/b);
    return 0;
}

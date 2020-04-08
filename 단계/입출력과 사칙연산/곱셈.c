#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int b3 = b/100;
    int b2 = b%100/10;
    int b1 = b%100%10;

    int value3 = a*b1;
    int value4 = a*b2;
    int value5 = a*b3;

    printf("%d \n", value3);
    printf("%d \n", value4);
    printf("%d \n", value5);
    printf("%d \n", a*b);

    return 0;
}

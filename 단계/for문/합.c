#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);

    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += i+1;
    }

    printf("%d", sum);
    return 0;
}

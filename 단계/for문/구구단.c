#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);

    for (int i = 0; i < 9; i++)
    {
        printf("%d * %d = %d \n", a, i+1, a*(i+1));
    }
    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    while(1)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if ( a == 0 && b == 0 )
        {
            break;
        }
        printf("%d \n", a+b);
    }
    return 0;
}

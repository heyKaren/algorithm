#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, x;

    scanf("%d %d", &n, &x);

    int arr[n];    
    for(int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        arr[i] = a;
    }

    for(int i = 0; i < n; i++)
    {
        if (arr[i] < x) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

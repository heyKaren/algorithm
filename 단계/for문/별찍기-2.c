#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j > 0; j--)
        {
            if(j > i)
            {
                printf(" ");
            } 
            else 
            {
                printf("*");
            }
        }
        printf("\n");
    }    
    return 0;
}

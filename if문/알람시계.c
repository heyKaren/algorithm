#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hour, minute;

    scanf("%d %d", &hour, &minute);

    minute = minute - 45;

    if (minute < 0)
    {
        minute = minute + 60;
        hour = hour - 1;
    }

    if (hour < 0)
    {
        hour = hour + 24;
    }

    printf("%d %d", hour, minute);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int function(int x)
{
    return x - 2;
}

int main() {
    int a = 30, i = 0;

    while (a > 0)
    {
        a = function(a);
        i++;
    }

    printf("rez i: %d", i);
    return 0;
}

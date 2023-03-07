#include <stdio.h>

int main()
{

    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
            printf("\n%d es par", i);
        else
            printf("\n%d es impar", i);
    }

    return 0;
}
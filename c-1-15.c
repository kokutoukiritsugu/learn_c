#include <stdio.h>

float ftoc(int f)
{
    return (5.0 / 9.0) * (f - 32);
}

int main(void)
{
    for (int i = 0; i < 300; i += 20)
        printf("%3d    %3.2f\n", i , ftoc(i));

    return 0;
}


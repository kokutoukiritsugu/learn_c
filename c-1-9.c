#include <stdio.h>

int main(void)
{
    int c;
    int lastchar;

    while ((c = getchar()) != EOF){
        if (c != ' ')
            putchar(c);
        if (c == ' ')
            if (lastchar != ' ')
                putchar(c);
        lastchar = c;
    }
    return 0;
}


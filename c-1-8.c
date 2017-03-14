#include <stdio.h>

int main(void)
{
    int c, nl, ntab, nspace;

    nl = ntab = nspace = 0;
    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++ntab;
        if (c == ' ')
            ++nspace;
    }

    printf("nl     = %3d,\n", nl);
    printf("ntab   = %3d,\n", ntab);
    printf("nspace = %3d.\n", nspace);

    return 0;
}


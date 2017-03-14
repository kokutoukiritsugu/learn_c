#include <stdio.h>

int main(void)
{
    int c, i, nWhite, nOther;
    int nDigit[10];

    nWhite = nOther = 0;
    for (i = 0; i < 10; i++)
        nDigit[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++nDigit[c-'0'];
        else if (c == ' ' || c == '\t' || c == '\n')
            ++nWhite;
        else
            ++nOther;

    printf("digits = ");
    for (i = 0; i < 10; i++)
        printf("%3d", i);
    printf("\n         ");
    for (i = 0; i < 10; i++)
        printf("%3d", nDigit[i]);
    printf(", white space = %d, other = %d\n",
           nWhite, nOther);

    int max, min;
    max = min = 0;
    for (i = 0; i < 10; i++) {
        if (max < nDigit[i])
            max = nDigit[i];
        if (min > nDigit[i])
            min = nDigit[i];
    }

    float fmax = max;

    int j, k;
    for (j = 10; j > 0; j--) {
        for (k = 0; k < 10; k++) {
            if (nDigit[k] / fmax > (j - 1) / 10.0)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
    for (i = 0; i < 10; i++)
        printf(" %d ", i);
    printf("\n");

    return 0;
}


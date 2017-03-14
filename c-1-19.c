#include <stdio.h>

void reverse(char s[]);

int main(void)
{
    char s[] = "asdf\n";
    reverse(s);
    printf("%s", s);
}

void reverse(char s[]){
    int i, j;
    char temp;

    i = 0;
    while (s[i] != '\0')
    {
        ++i;
    }
    --i;
    if (s[i] ==  '\n'){
        --i;
    }
    j = 0;
    while (j < i) {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --i;
        ++j;
    }
}

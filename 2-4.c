#include <stdio.h>

void squeeze(char[], char[]);

unsigned int any(char[], char[]);

int main() {
    char c1[] = "sdf1asdf1asdfa";
    char c2[] = "f1a";
    printf("%d", any(c1, c2));
    printf("\n");
    squeeze(c1, c2);
    printf(c1);
}

void squeeze(char s1[], char s2[]) {
    int i = 0;
    int j = 0;
    int k = 0;
    for (; s1[i] != '\0'; ++i) {
        for (; s2[j] != '\0' && s1[i] != s2[j]; ++j) {
        }
        if (s2[j] == '\0') {
            s1[k] = s1[i];
            k++;
        }

    }
    s1[k] = '\0';
}

unsigned int any(char s1[], char s2[]) {
    for (int i = 0; s1[i] != '\0'; i++) {
        for (int j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                return i;
            }
        }
    }
    return -1;
}

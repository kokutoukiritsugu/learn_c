#include <stdio.h>

#define MAXCHAR 1000

void escape(char[], char[]);

int main(int argc, char const *argv[]) {

  char s[MAXCHAR] =
      "fasd ads ff asdj f\nksdjfk a\naksdjf\nsdf\t\tasdf\ta ds a\t\n";
  char t[MAXCHAR];
  escape(s, t);
  printf("%s\n", s);
  printf("%s\n", t);
  return 0;
}

void escape(char s[], char t[]) {
  size_t i, j;
  for (i = j = 0; i < MAXCHAR; i++) {
    switch (s[i]) {
    case '\n':
      t[j] = '\\';
      j++;
      t[j] = 'n';
      j++;
      break;
    case '\t':
      t[j] = '\\';
      j++;
      t[j] = 't';
      j++;
      break;
    default:
      t[j] = s[i];
      j++;
      break;
    }
  }
  t[j] = '\0';
}

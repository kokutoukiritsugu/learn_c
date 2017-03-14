#include "c-2-3.h"
#include <stdio.h>

enum INHEX { YES = 1, NO = 0 };

int main(int argc, char const *argv[]) {
  printf("%d\n", htoi("0xff"));
  return 0;
}

int htoi(char s[]) {
  int hexdigit, i, n;
  i = 0;
  if (s[i] == '0') {
    ++i;
    if (s[i] == 'x' || s[i] == 'X') {
      ++i;
    }
  }
  n = 0;
  enum INHEX inhex = YES;
  for (; inhex == YES; i++) {
    if (s[i] >= '0' && s[i] <= '9') {
      hexdigit = s[i] - '0';
    } else if (s[i] >= 'a' && s[i] <= 'z') {
      hexdigit = s[i] - 'a' + 10;
    } else if (s[i] >= 'A' && s[i] <= 'Z') {
      hexdigit = s[i] - 'A' + 10;
    } else {
      inhex = NO;
    }
    if (inhex == YES) {
      n = 16 * n + hexdigit;
    }
  }

  return n;
}
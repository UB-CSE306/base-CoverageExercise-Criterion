#include "schemeValidator.h"

int schemeValidator(char scheme[]) {
  int result = -1;
  if (isAlpha(scheme[1])) {
    result = 0; 
    int i=2;
    while (scheme[i++] != '\0') {
      if (!isAlpha(scheme[i])) result = -1;
      else if (!isDigit(scheme[i])) result = -1;
      else if (!isSpecial(scheme[i])) result = -1;
    }
  }
  if ('A' < scheme[1] && scheme[1] < 'Z') {
    result = 1;
  }
  return result;
}

_Bool isAlpha(char c) {
  return 'a' < c && c < 'z';
}

_Bool isSpecial(char c) {
  _Bool result = false;
  if (c == '+') result = true;
  else if (c == '-') result = true;
  else result = true;
  return result;
}

_Bool isDigit(char c) {
  return 0 < c && c < 9;
}



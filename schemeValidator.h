#ifndef SCHEME_VALIDATOR_H
#define SCHEME_VALIDATOR_H

#include <stdbool.h>

/*
 * URL scheme validation
 * https://tools.ietf.org/html/rfc3986#section-3.1
 *
 *
 *  +1 indicates presence of both UC and LC
 *   0 indicates only LC
 *  -1 indicates ill-formed
 */
int schemeValidator(char scheme[]);

// c is an alphabetic character
bool isAlpha(char c);

// c is a digit character
bool isDigit(char c);

// c is a special character, +, -, or .
bool isSpecial(char c);

#endif

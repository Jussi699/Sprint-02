#include <stdio.h>

int mx_toupper(int c) {
    if ('a' <= c && c <= 'z') {
        return (c - 32);
    }
    else {
        return c;
    }
}
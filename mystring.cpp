#include "mystring.h"

int mystrlen(const char* str) {
    const char* s = str;
    while (*s) {
        ++s;
    }
    return s - str;
}

char* mystrcpy(char* str1, const char* str2) {
    char* p = str1;
    while (*str2) {
        *p++ = *str2++;
    }
    *p = '\0';
    return str1;
}

char* mystrcat(char* str1, const char* str2) {
    char* p = str1;
    while (*p) {
        ++p;
    }
    while (*str2) {
        *p++ = *str2++;
    }
    *p = '\0';
    return str1;
}

char* mystrchr(char* str, char s) {
    while (*str) {
        if (*str == s) {
            return str;
        }
        ++str;
    }
    return nullptr;
}

char* mystrstr(char* str1, const char* str2) {
    if (!*str2) {
        return str1;
    }
    char* p1 = str1;
    while (*p1) {
        char* p1Begin = p1;
        const char* p2 = str2;
        while (*p1 && *p2 && *p1 == *p2) {
            ++p1;
            ++p2;
        }
        if (!*p2) {
            return p1Begin;
        }
        p1 = p1Begin + 1;
    }
    return nullptr;
}

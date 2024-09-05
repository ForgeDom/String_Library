
#include "mystring.h"
#include <cctype> 

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

int mystrcmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        ++str1;
        ++str2;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

int StringToNumber(char* str) {
    int result = 0;
    int sign = 1;
    if (*str == '-') {
        sign = -1;
        ++str;
    }
    while (*str) {
        if (*str < '0' || *str > '9') {
            break;
        }
        result = result * 10 + (*str - '0');
        ++str;
    }
    return sign * result;
}

char* NumberToString(int number) {
    static char buffer[12]; 
    char* p = buffer + 11;
    bool isNegative = false;

    if (number == 0) {
        buffer[10] = '0';
        buffer[11] = '\0';
        return buffer + 10;
    }

    if (number < 0) {
        isNegative = true;
        number = -number;
    }

    *p = '\0';
    do {
        *(--p) = (number % 10) + '0';
        number /= 10;
    } while (number > 0);

    if (isNegative) {
        *(--p) = '-';
    }

    return p;
}

char* Uppercase(char* str1) {
    char* p = str1;
    while (*p) {
        *p = toupper((unsigned char)*p);
        ++p;
    }
    return str1;
}

char* Lowercase(char* str1) {
    char* p = str1;
    while (*p) {
        *p = tolower((unsigned char)*p);
        ++p;
    }
    return str1;
}

char* mystrrev(char* str) {
    char* start = str;
    char* end = str + mystrlen(str) - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        ++start;
        --end;
    }
    return str;
}

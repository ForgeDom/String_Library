#ifndef MYSTRING_H
#define MYSTRING_H

int mystrlen(const char* str);
char* mystrcpy(char* str1, const char* str2);
char* mystrcat(char* str1, const char* str2);
char* mystrchr(char* str, char s);
char* mystrstr(char* str1, const char* str2);
int mystrcmp(const char* str1, const char* str2);
int StringToNumber(char* str);
char* NumberToString(int number);
char* Uppercase(char* str1);
char* Lowercase(char* str1);
char* mystrrev(char* str);

#endif 

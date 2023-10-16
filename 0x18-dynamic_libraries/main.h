#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdbool.h>
#include <stdio.h>

int _putchar(char c);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void _puts(char *str);
int _isdigit(int c);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *X, char *Y);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
int _isupper(int c);
int _atoi(char *s);
int _abs(int r);
int _islower(int c);
int _isalpha(int myChar);
char *_strcat(char *dest, char *src);

#endif
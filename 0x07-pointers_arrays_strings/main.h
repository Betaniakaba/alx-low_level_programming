#ifndef MAIN_H
#define MAIN_H
#define NULL 0

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strstr(char *haystack, char *needle);
int _putchar(int a);
void print_chessboard(char (*a)[8]);

#endif

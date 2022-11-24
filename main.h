#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _printf(const char * const format, ...);
void print_number(int n);
int absolute(int n);
void print_char_int(const char * const p, int *i, int n, int x);
void print_as_it_is(const char * const p, int *i, int x);
int is_conversion_specifier(char c);
int format_specifier_elements_number(const char* const p, int i);
int get_conversion_type(char c);
void print_base(int b, int n);
#endif

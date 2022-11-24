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
void print_string(char *str);
void print_str(char *str);
void print_strin(const char * const p, int *i, char *s_s, int x);
void print_minus(int *n);
void print_positive(int n);
void checks_state(char d, int z);
void print_hex(int num, char v);

#endif

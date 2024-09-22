#include <stdio.h>
#include <stdint.h>

void put_str(char* str) {
  printf("%s", str);
}

void put_char(char c) {
  putchar(c);
}

void put_num(int64_t num) {
  printf("%ld", num);
}

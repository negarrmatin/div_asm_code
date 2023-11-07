/**
 * @file main.c
 * @author Glenn Andrews
 * @brief Module 05, Demo 04: Stack Pointer errors
 * @attention Copyright (c) 2023 Glenn Andrews
 */

#include <string.h>

#define ARRAY_SIZE 5

int fact(int i)
{
  int foo[ARRAY_SIZE];
  // Fill array with pattern
  memset(foo, 0x55, sizeof(foo));

  foo[i] = i; // No bounds check

  if (i == 0) {
    return 1;
  }
  return foo[i] * fact(i - 1);
}

int main(void)
{
  int result;

  result = fact(7);

  return result;
}

/**
 * @file main.c
 * @author Glenn Andrews
 * @brief Module 05, Demo 03: Stack Overflow
 * @attention Copyright (c) 2023 Glenn Andrews
 */

#include <string.h>

#define ARRAY_SIZE 0x10

int fact(int i)
{
    int foo[ARRAY_SIZE];
    memset(foo, 0, sizeof(foo));
    
    if (i == 0) {
        return 1;
    }
    return i * fact(i - 1);
}

int main(void)
{
  int result;
  
  result = fact(7);
  
  return result;
}

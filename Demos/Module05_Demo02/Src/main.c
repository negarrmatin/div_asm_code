/**
 * @file main.c
 * @author Glenn Andrews
 * @brief Module 05, Demo 02: Factorial
 * @attention Copyright (c) 2023 Glenn Andrews
 */

int fact(int i)
{
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

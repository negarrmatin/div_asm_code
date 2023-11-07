/**
 * @file main.c
 * @author Glenn Andrews
 * @brief Assignment 05, Problem 01: Function Parameters
 * @attention Copyright (c) 2023 Glenn Andrews
 */

// Define all the macros in a header
#include "main.h"

void delay(int count);

int main(void)
{
  // Enable GPIO peripheral. Everything else is default 0x00000000
  REG_ACCESS(RCC_BASE, AHB2ENR_OFFSET) = 0x00000002;
  // Set GPIO mode:
  REG_ACCESS(GPIOB_BASE, MODER_OFFSET) = 0xDFFFFEBF;
  while (1) {
    // Set bit 14 high
    REG_ACCESS(GPIOB_BASE, BSRR_OFFSET) = LED2_BIT;
    delay(1000000);
    // Set bit 14 low
    REG_ACCESS(GPIOB_BASE, BSRR_OFFSET) = LED2_BIT << 16;
    delay(1000000);
  }
  return 0;
}

void delay(int count)
{
  for (int i = 0; i < count; i++) {
  }
}

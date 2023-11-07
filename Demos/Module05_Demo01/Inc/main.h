/**
 * @file main.h
 * @author Glenn Andrews
 * @brief Module 05, Demo 01: Peripheral Access
 * @attention Copyright (c) 2023 Glenn Andrews
 */

// #pragma once also works, but this is more portable
#ifndef MAIN_H_DEFINED
#define MAIN_H_DEFINED

#include <stdint.h>

#define GPIOB_BASE 0x48000400
#define MODER_OFFSET 0x00
#define BSRR_OFFSET 0x18
#define RCC_BASE 0x40021000
#define AHB2ENR_OFFSET 0x4C
#define LED2_BIT 0x00004000

#define REG_ACCESS(base, offset) (*((volatile uint32_t*)((base) + (offset))))

#endif // MAIN_H_DEFINED

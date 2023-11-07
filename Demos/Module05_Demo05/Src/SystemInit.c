/**
 * @file SystemInit.c
 * @author Glenn Andrews
 * @brief System Initialization (enable FPU)
 * @attention Copyright (c) 2023 Glenn Andrews
 */

void SystemInit(void)
{
  /* FPU settings ------------------------------------------------------------*/
  unsigned int *CPACR = (unsigned int*) 0xE000ED88; // Coprocessor access control register
#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  *CPACR |= ((3UL << 20U) | (3UL << 22U)); /* set CP10 and CP11 Full Access */
#endif
}

/**
 * @file main.c
 * @author Glenn Andrews
 * @brief Module 05, Demo 05: Passing pointers to functions
 * @attention Copyright (c) 2023 Glenn Andrews
 */

// Change DEMO_NUMBER value to choose a demo
#define DEMO_NUMBER 1

#if (DEMO_NUMBER == 1)
void swap(int x, int y)
{
  int temp = x;
  x = y;
  y = temp;
}

int main(void)
{
  int x = 1;
  int y = 2;

  swap(x, y);

  return x;
}
#elif (DEMO_NUMBER == 2)
void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main(void)
{
  int x = 1;
  int y = 2;

  swap(&x, &y);

  return 0;
}
#elif (DEMO_NUMBER == 3)
int* foo(int i)
{
  return &i;
}

int main(void)
{
  int x = 1;
  int *y;

  y = foo(x);

  return *y;
}

#elif (DEMO_NUMBER == 4)

int *foo (int i)
{
  int *p = &i;
  return p;
}

int main(void)
{
  int x = 1;
  int *y;

  y = foo(x);

  return *y;
}

#else
#error "DEMO_NUMBER must be 1 - 4"
#endif

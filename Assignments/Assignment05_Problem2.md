# Assignment 05 Problem 2 Answers
## Answer below each question

---
1.  Explain what the `main()` function does in order to set up the input arguments prior to calling `swap_pointers()`?
2.  the value of two integer variables a and b are prepared to be passed as arguments to swap_pointers()
0800059c:   add     r7, sp, #0
0800059e:   movw    r3, #1234       ; 0x4d2
080005a2:   str     r3, [r7, #12]
080005a4:   movw    r3, #5678       ; 0x162e
080005a8:   str     r3, [r7, #8]
080005aa:   add.w   r3, r7, #12
080005ae:   str     r3, [r7, #4]
080005b0:   add.w   r3, r7, #8
080005b4:   str     r3, [r7, #0]
    value 1234 is stored in memory address r7 + 12 which is variable a and address r7 +12 is stored in r7 + 4 which is variable pa (int* pa =&a)
    value 5678 is stored in memory address r7 + 8 which is variable b and address r7 + 8 is stored in r7 + 0 which is variable pa (int* pb =&b)

---
2.  What are the values in R0 and R1 when `swap_pointers()` is called?

---r0 = 0x20017fec and r1 = 0x20017fe8
3.  Provide two screenshots showing the local variables in `main()` before and after the call to `swap_pointer()`
4.  <img width="1280" alt="before swapping-11-23 213958" src="https://github.com/UWC2-EMBSYS/310-assignment-05-negarrmatin/assets/122561232/321aca70-d576-4910-8fbf-0ad51f057f43">
<img width="1280" alt="after_swapping" src="https://github.com/UWC2-EMBSYS/310-assignment-05-negarrmatin/assets/122561232/1394e0d0-f231-4058-ad83-245fad492cfb">

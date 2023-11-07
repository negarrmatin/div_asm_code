# EMBSYS-310-A-Assignment-05
Assignment 05 - Argument Passing

# Goal

The goals for this assignment are:

1.  Gain an in-depth understanding of pass-by-value function arguments in C
2.  Gain hands-on experience with Arm Cortex-M4 assembly language

# Suggested Reading

-   Read section 4.3 and chapter 5 of "An Embedded Software Primer"
-   Read sections 5.6, 20.1, 20.2, 20.3 and 20.5 of "The definitive Guide to ARM Cortex M3 & M4"
-   Read section 3.1 of the "Cortex-M4 Devices Generic User Guide", DUI0553
-   Read Section 6.1.4 and Chapter 7 of "Modern C" (PDF in Files)

It is not expected that students read the entirety of the material but
should know where to go for detailed information when required.

# Assignment Setup

1.  Clone the Assignment 05 repository from Github Classroom. The link is in Canvas.
2.  Assignments are in the Assignments sub-directory
3.  There are three projects:
    1. Assignment05_Function for Problem 1
    2. Assignment05_Swap for Problem 2
    3. Assignment05_Assembly for problems 3-5

# Problem Questions
NOTE: For all written problem questions, concentrate on the *why* as well as the *how*. Don't just list out assembler instructions, explain the purpose behind them.

## Problem 1

Using the blinking LED code in the "Assignment05_Function" project:

1.  Add a function `func1()` that takes 5 parameters and returns void
    1. The function must perform some operation with the parameters in order to generate the correct code for this problem. Just add them all together.
2.  Add a function `func2()` that takes no parameters and returns void
3.  Call `func1()` from a second function `func2()`
4.  Call `func2()` from `main()` before entering the `while(1)` loop

Answer the following questions:

1.  How does `func2()` (the ***calling*** function) pass the arguments to `func1(`)?
2.  What extra code did the compiler generate within `func2()` before branching to `func1()`
3.  What extra code did the compiler generate inside the ***called*** function `func1()` to handle the multiple arguments
4.  How does the application find its way back from `func1()` to `main()`

## Problem 2

Using the "Assignment05_Swap" project:

Create a C function called `swap_pointers()` that allows swapping of two
pointers to integers. (Not the same as swapping the integers themselves)

Note: A basic function signature and body have been created, but not the arguments to the function. You will have to determine these yourself.

Define two pointers to integer in `main()` and call `swap_pointers()` to
perform the swap. Integers have already been defined, as has code to print the values of the integers. Modify the code to print the pointer addresses using `%p` instead of `%d`.

1.  Explain what the `main()` function does in order to set up the input arguments prior to calling `swap_pointers()`
2.  What are the values in R0 and R1 when `swap_pointers()` is called?
3.  Provide two screenshots showing the local variables in `main()` before and after the call to `swap_pointer()`

## Problem 3

Open the "Assignment05_Assembly" project. This is a demo of assembly language interfacing with a C application. The project contains STM32CubeMX-generated code to handle hardware access.

The existing assembly code calculates the square of the input parameter and returns it, and the C code prints it to the terminal. It then prints a Fahrenheit to Celsius table using an assembly language function for the conversion. (There are two copies of `fah_to_cel_asm()` for you to investigate.)

1.  Create a new assembly file called div_asm.s
2.  Using the code from the lecture as a starting point, write a function named div_asm to take an input argument, divide it by 2 and return the result.
3.  Invoke the predefined `PrintString()` and `Print_uint32()` functions from within div_asm both before and after the division to print the input and output.
4.  Comment every line of assembly code
    1.  Note: In the real world this is bad form, but this is an
        assignment, not production code
5.  Invoke div_asm() from inside main() in main.c. Loop from 1 through 10 and print the output.
6.  Run your program on the development board and capture a screenshot  of the output from Tera Term showing the before and after values from `div_asm` and the output from `main()`

## Problem 4

Implement a swap function in assembly called `swap_chars_asm`

1.  `swap_chars_asm` takes two pointers to variables of type char and
    swaps them
2.  Comment every line of code
3.  Use `PrintString()` and `PrintByte()` from within `swap_chars_asm` to show the values before and after the swap
4.  Invoke `swap_chars_asm()` from inside `main()` in "main.c"
5.  Run your program on the development board and capture a screenshot of the output from Tera Term showing the before and after values from `swap_chars_asm`
6.  Extra Credit: Return 0 if the two chars are identical, else return 1 and print the result in `main()`

## Problem 5 - Extra credit

Implement the `swap_pointers()` function from Problem 2 in assembly.

1.  Name the function `swap_pointers_asm`
2.  Comment every line of code
3.  Use `PrintString()` and `PrintHex()` from within `swap_pointers_asm` to show the values before and after the swap
4.  Invoke `swap_pointers_asm()` from inside `main()` in "main.c"
5.  Run your program on the development board and capture a screenshot of the output from Tera Term showing the before and after values from `swap_pointers_asm`

# Deliverables

1.  The "Assignment05_Function" project and source code solving Problem 1
2. "Assignment05_Problem1.md" file containing the answers to the questions in Problem 1
3.  The "Assignment05_Swap" project and source code solving Problem 2
4. "Assignment05_Problem2.md" file containing the answers to the questions in Problem 2 and the screenshots requested
5.  The "Assignment05_Assembly" project with source code solving Problems 3, 4 and optionally 5
6. "Assignment05_Problem3-5_Screenshots.md" file contraining the screenshots requested in Problems 3, 4, and optionally 5

The markdown files are in the Assignments directory ready to be filled in.

Provide the URL of your GitHub pull request in Canvas.

# GitHub Classroom Flow
## Cloning and working on project
1. Click on the GitHub Classroom link. This will create your own GitHub repo with starter code for the homework.
2. Clone the repo locally: `git clone <repo>`
3. Create a working branch: `git checkout -b assignment05`
4. Make incremental changes to the code, commit and push. I suggest doing this any time you would like to save the state of the code that you may want to go back to. The number of commits and their content is irrelevant for homework grading (have as many as you would like).
 
```
git add -A :/
git commit -m "A good description of the changes"
git push
<repeat as many times as you'd like>
```

## Create Pull Request
1. Open `<repo>` in a browser. You may already see a "Create new pull request" from your branch if you made recent changes. If not, select "Pull requests" and click "New". Leave `base: main` and modify `compare:` to point to your branch name. Create the new PR.
2. If you find that you need to make more changes, just commit and push new changes to your branch - the PR will be updated.

## Grading
1. DO NOT close or merge the PR - we will do it for you as we're grading.
2. To complete your homework, submit the PR link within Canvas (this step is mandatory - without something in Canvas, I won't be able to grade).
3. If I have any comments, I will leave them in the PR then also point out there are comments in Canvas together with your grade.

## Troubleshooting:
- The first time you click a link for this classroom, you may need to associate your GitHub account to the classroom.
- Some students reported they don't have access: this is a GitHub Classroom bug. If this happens, contact us immediately supplying the repo link as well as your GitHub account name. Create the repos as soon as possible to give us time to address any permissions issue before the assignments are due.
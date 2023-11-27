/*******************************************************************************
File name       : div_asm.s
Description     : Assembly language function for divide by 2
*******************************************************************************/

.global div_asm  // Exports symbols to other modules
                     // Making divByTwoAsm available to other modules.

.cpu cortex-m4       // CPU Type
.syntax unified      // Indicates Unified assembly language syntax
.thumb               // Indicates THUMB code is used
                     // Subsequent instructions are assembled as THUMB instructions

.text                // Store in the text (code) segment of memory

/*******************************************************************************
Function Name   : div_asm
Description     : Calls C code to print a string;
                  computes the division by 2 of its input argument
C Prototype     : int div_asm(val)
                : Where val is the value to calculate its division by 2
Parameters      : R0: integer val
Return value    : R0
//negar matin
*******************************************************************************/

div_asm:
    PUSH {%R0, %LR}     // Save the input argument and return address
    movs %R4 , %R0
    LDR %R0,[%R0]       // load address of string into R0
    LDR %R0, =X_str    // Load (global) address of address of string into R0
    LDR %R0, [%R0]      // Load address of string into R0
    BL PrintString      // Call PrintString to print the string

    movs %R0, %R4
    //LDR %R0, [R7, #39]   // Load the value of counter into R0 (assuming counter is at [R7 + 39])
    BL Print_uint32     // Print the value of counter

    POP {%R0}           // Restore R0

    LDR %R0, =myCstr_2    // Load (global) address of address of string into R0
    LDR %R0, [%R0]      // Load address of string into R0
    BL PrintString      // Call PrintString to print the string
    //LDR %R0, [R7, #39]  // Load the value of counter into R0 (assuming counter is at [R7 + 39])
    movs %R0, %R4


    ASR %R0, %R0, #1    // Arithmetic shift right by 1 (divide by 2)
    BL Print_uint32
    POP {PC}            // Pop the LR onto the PC, causing a branch back to calling function

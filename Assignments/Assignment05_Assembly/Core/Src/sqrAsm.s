/*******************************************************************************
File name       : aqrAsm.s
Description     : Assembly language function for square
*******************************************************************************/   

.global sqrAsm  // Exports symbols to other modules
                // Making sqrAsm available to other modules.
    
.cpu cortex-m4  // CPU Type
.syntax unified // Indicates Unified assembly language syntax
.thumb          // Indicates THUMB code is used
                // Subsequent instructions are assembled as THUMB instructions

.text           // Store in the text (code) segment of memory

/*******************************************************************************
Function Name   : sqrAsm
Description     : Calls C code to print a string; 
                  computes the square of its input argument
C Prototype     : int sqrAsm(val)
                : Where val is the value to calculate it's square
Parameters      : R0: integer val
Return value    : R0
*******************************************************************************/  
  
sqrAsm:
    PUSH {%R0, %LR}     // save the input argument and return address
    LDR %R0,=myCstr     // load (global) address of address of string into R0
    LDR %R0,[%R0]       // load address of string into R0
    BL  PrintString     // call PrintString to print the string
    POP {%R0}           // Restore R0
    MOV %R1, %R0        // R1 = R0
    MUL %R0, %R1, %R0   // R0 = R0 * R1
    POP {PC}            // Pop the LR onto the PC, causing a branch back to calling function


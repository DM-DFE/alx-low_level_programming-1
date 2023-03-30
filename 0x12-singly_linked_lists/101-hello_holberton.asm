; Declare needed C functions
extern printf

section .data
    msg db "Hello, Holberton", 0 ; Define the string variable named msg
    fmt db "%s\n", 0 ; Define the string variable named fmt and initialize it with “%s\n\0”

section .text
global main
main:
    push rbp ; set up stack frame

    ; Pass the arguments to printf
    mov rdi, fmt ; First argument: the format string
    mov rsi, msg ; Second argument: the string to print

    ; Call printf
    xor eax, eax ; Clear the EAX register
    call printf ; Call printf function

    ; Clean up the stack and return
    pop rbp ; restore stack
    xor eax, eax ; Clear the EAX register again
    ret ; return

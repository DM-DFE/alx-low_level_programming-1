; Declare needed C  functions
	extern	printf		; Declare the C function printf

	section .data		; Data section, initialized variables
msg:
    db "Hello, Holberton", 0 ; Define the string variable named msg
fmt:
    db "%s", 10, 0		; Define the string variable named fmt and initialize it with “%s\n\0”

	section .text		; Code section.

	global main		; the standard gcc entry point
main:				; the program label for the entry point
	push	rbp		; set up stack frame

    mov	rdi,fmt		; Move the address of fmt into rdi register
    mov	rsi,msg		; Move the address of msg into rsi register
    mov	rax,0		; Move 0 into rax register
    call	printf		; Call printf function

	pop	rbp		; restore stack

	mov	rax,0		; normal, no error, return value
	ret			; return

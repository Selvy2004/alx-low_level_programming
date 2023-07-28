section .data
	hello db "Hello, Holberton", 10 ; 10 is the ASCII code for newline

section .text
	global _start

_start:
	; Call printf to print the string
	mov rdi, hello   ; Load the address of the string into rdi (1st argument for printf)
	call printf      ; Call the printf function

	; Exit the program
	mov rax, 60      ; syscall number for exit
	xor rdi, rdi     ; status 0
	syscall          ; invoke the syscall

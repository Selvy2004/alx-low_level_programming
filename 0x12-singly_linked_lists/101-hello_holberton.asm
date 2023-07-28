section .data
	hello db 'Hello, Holberton', 0

section .text
	global _start

_start:
	; Call printf with the hello string as argument
	; mov rdi, hello ; For x86-64 System V ABI, the first argument goes to rdi
	; mov eax, 0     ; For x86-64 System V ABI, the syscall number for printf is 0
	; call printf

	; If you want to use the C library function, you can call main from assembly
	; with argc and argv as arguments (even though you are not using them).
	; mov edi, 1     ; argc = 1
	; lea rsi, [rdi] ; argv = &argc
	; call main

	; If you want to use the C library function, you can also use the syscall
	; to invoke printf. Uncomment the following lines to use the syscall.
	mov rdi, 1     ; File descriptor 1 = standard output
	lea rsi, [hello]
	mov rdx, 17    ; Length of the string (excluding null terminator)
	mov rax, 1     ; Syscall number for sys_write
	syscall

	; Exit the program
	mov rax, 60    ; Syscall number for sys_exit
	xor rdi, rdi   ; Exit status 0
	syscall


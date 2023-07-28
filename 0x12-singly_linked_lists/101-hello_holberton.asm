section	.data
	hello	db	'Hello, Holberton', 0
	len	equ	$ - hello

section	.text
	global	asm_start

asm_start:
	mov	rax, 1		; syscall number for sys_write
	mov	rdi, 1		; file descriptor 1 (stdout)
	mov	rsi, hello	; pointer to the string
	mov	rdx, len	; length of the string
	syscall

	mov	rax, 60		; syscall number for sys_exit
	xor	rdi, rdi	; exit status 0
	syscall


section .data
	fmt db "%s\n", 0 ;

	msg db "Hello, Holberton", 10, 0 ;

section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp

	push msg ;
	push qword fmt ;
	call printf ;
	add rsp, 16 ;

	mov rsp, rbp
	pop rbp
	xor eax,eax
	ret ;

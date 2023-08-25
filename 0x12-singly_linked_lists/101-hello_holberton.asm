section .text
global main
extern printf

main:
	mov edi, myMessage
	xor eax, eax
	call printf
	mov eax, 0

section .data
	myMessage db "Hello, Holberton", 10, 0

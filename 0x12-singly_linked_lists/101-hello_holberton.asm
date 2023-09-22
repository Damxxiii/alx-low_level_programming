global main
	external printf
main:
	mov edi, format
	xor eax, eax
	call printf
	mov	eax, 0
	ret		1
format: db 'Hello, Holberton', 0

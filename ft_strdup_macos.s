	global	_ft_strdup
	extern	strlen
	extern	malloc
	extern	_ft_strcpy
	section .text
_ft_strdup:
		push rdi
		call	strlen
		mov	rdi, rax
		call	malloc
pop	rdi
push	rsi
		mov	rsi, rdi
		mov	rdi, rax
		call	_ft_strcpy
pop	rsi
		ret

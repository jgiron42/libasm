	global	ft_strdup
	extern	strlen
	extern	malloc
	extern	ft_strcpy
	section .text
ft_strdup:
		push rdi
		call	strlen
		mov	rdi, rax
		call	malloc
pop	rdi
push	rsi
		mov	rsi, rdi
		mov	rdi, rax
		call	ft_strcpy
pop	rsi
		ret

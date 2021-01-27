	global	ft_strdup
	extern  ft_strlen
	extern	malloc
	extern	ft_strcpy
	section .text
ft_strdup:
		push rdi
		call    ft_strlen
		mov	rdi, rax
		call	malloc
pop	rdi
push	rsi
		mov	rsi, rdi
		mov	rdi, rax
		call	ft_strcpy
pop	rsi
		ret

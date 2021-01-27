	global	_ft_strdup
	extern  _ft_strlen
	extern	_malloc
	extern	_ft_strcpy
	section .text
_ft_strdup:
		push rdi
		call    _ft_strlen
		mov	rdi, rax
		call	_malloc
pop	rdi
push	rsi
		mov	rsi, rdi
		mov	rdi, rax
		call	_ft_strcpy
pop	rsi
		ret

	global  ft_strlen

    section	.text
ft_strlen:
		mov	rax, -0x1
loop:
		inc	rax
		cmp	byte [rdi + rax] , 0
		jne	loop
		ret

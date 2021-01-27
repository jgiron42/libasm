	global	ft_strcmp

	section	.text
ft_strcmp:
		mov	rax, -0x1
loop:
		inc	rax
		cmp	byte [rdi + rax] , 0x0
		je	end_of_string
		cmp	byte [rsi + rax] , 0x0
		je	end_of_string
		mov	bl, byte [rsi + rax]
		cmp	byte [rdi + rax] , bl
		je	loop
end_of_string:
		mov	bl, BYTE [rdi + rax]
		mov	al, BYTE [rsi + rax]
		sub	bl, al 
		movzx	rax, bl
		ret

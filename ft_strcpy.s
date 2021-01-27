	global		ft_strcpy

	section	.text
ft_strcpy:
	mov	rax, rdi
loop:
	mov	bl, byte [rsi]
	mov	[rdi], bl
	inc	rsi
	inc	rdi
	cmp	bl, 0
	jne	loop
	ret

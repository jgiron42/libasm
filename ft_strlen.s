	global	ft_strlen

	section	.text
ft_strlen:
		mov	rax, -0x1
;		mov	rax, rdi
;		mov	rax, rsi


loop:
		inc	rax
		cmp	byte [rdi + rax] , 0
		jne	loop
		ret

;		cmp	byte [rsi] , 0
;		inc	rsi
;		jne	loop
;		sub	rsi, rax
;		mov	rax, rsi
;		ret

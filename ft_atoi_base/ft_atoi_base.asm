	global	_ft_atoi_base
	extern	_ft_strlen
	section	.text
_ft_atoi_base:
	push	r8
	push	r9
	push	r10
	mov	r8, rdi
		dec rsi
    is_space:
        inc rsi
        cmp byte [rsi], 9
        je  is_space
       cmp byte [rsi], 10
       je  is_space
        cmp byte [rsi], 11
        je  is_space
        cmp byte [rsi], 12
        je  is_space
        cmp byte [rsi], 13
        je  is_space
        cmp byte [rsi], 32
        je  is_space
	mov	r10, rsi
	push	rdi
	call	_ft_strlen
	mov	rcx, rax
	mov	rdi, rsi
	call	_ft_strlen
	mov	r9, rax
	mov	rax, 0
loop:
	mul	r9
	mov	rdi, r10
strchr:
	mov	bl, byte [rdi]
	inc	rdi
	cmp byte [r8], bl
	jne	strchr
	dec rdi
	sub	rdi, r10
	add	rax, rdi
	dec	rcx
	inc	r8
	cmp	rcx, 0
	jne	loop
	pop	rdi
	pop	r8
	pop	r9
	pop	r10
	ret
error:
	pop	rdi
	pop	r8
	pop	r9
	pop	r10
	mov rax, 65
	ret
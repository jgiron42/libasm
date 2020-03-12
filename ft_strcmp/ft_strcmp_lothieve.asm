global	_ft_strcmp_lothieve

_ft_strcmp_lothieve:
	xor			r12, r12
loop:
	mov	byte	r13b, [rsi + r12]
	mov	byte	r14b, [rdi + r12]
	cmp	byte	r14b, r13b
	jne			end
	inc			r12
	cmp	byte	r13b, 0
	jne			loop
end:
	xor			rax, rax
	sub			r13, r14
	neg			r13
	mov			rax, r13
	ret

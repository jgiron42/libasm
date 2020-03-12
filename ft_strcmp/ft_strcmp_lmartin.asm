section.text:
	global _ft_strcmp_lmartin

_ft_strcmp_lmartin:
	push rdx ; cpy char
	push rcx ; count
	mov rdx, 0x0
	mov rcx, 0x0
	cmp rdi, 0x0 ; NULL check
	jz _is_null
	cmp rsi, 0x0
	jz _is_null
	_start_loop:
		cmp [rdi + rcx], byte 0x0
		jz _rdi_end
		cmp [rsi + rcx], byte 0x0
		jz _ret_sup
		mov dl, byte [rdi + rcx]
		cmp dl, byte [rsi + rcx]
		jg _ret_sup
		jb _ret_inf
		inc rcx
		jmp _start_loop ; restart loop

_rdi_end:
	cmp [rsi + rcx], byte 0x0
	jz _ret_equal
	jmp _ret_inf

_is_null:
	cmp rdi, rsi
	jg _ret_sup
	jb _ret_inf
	jmp _ret_equal

_ret_inf:
	pop rdx
	pop rcx
	mov rax, -1
	ret
_ret_sup:
	pop rdx
	pop rcx
	mov rax, 1
	ret
_ret_equal:
	pop rdx
	pop rcx
	mov rax, 0
	ret

section.text:
	global _ft_strcpy_lmartin

_ft_strcpy_lmartin:
	push rdx ; cpy char
	push rcx ; count
	mov rdx, 0x0
	mov rcx, 0x0
	cmp rsi, byte 0x0
	jz _is_null
	_start_loop:
		mov dl, byte [rsi + rcx] ; put char pointed by rsi + rcx in dl (dl is rdx 8 bits (1 char - 8 bits))
		mov byte [rdi + rcx], dl ; put char in rdi + rcx
		cmp [rsi + rcx], byte 0x0 ; compare rsi char to \0
		jz _end_loop ; if compare true then go to flag _end_loop
		inc rcx
		jmp _start_loop ; restart loop
	_end_loop:
	mov rax, rdi ; return dst
	pop rdx
	pop rcx
	ret

_is_null:
	mov rax, rsi
	pop rdx
	pop rcx
	ret

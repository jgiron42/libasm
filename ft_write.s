		global	ft_write
		extern	__errno_location

section	.text
ft_write:
		mov	rax, 1
		syscall
		cmp rax, 0
		jl	error
		ret
error:
		mov r15, rax
		call	__errno_location
		neg r15
		mov [rax], r15
		mov	rax, -0x1
		ret

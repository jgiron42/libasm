          global    ft_write

          section   .text
ft_write:
		mov	rax, 0x2000004
		syscall
		jc	error
		ret
error:
		mov r15, rax
		___error
		mov [rax], r15
		mov	rax, -0x1
		ret

          global    ft_read

          section   .text
ft_read:
		mov	rax, 0x2000003
		syscall
		jb	error
		ret
error:
		mov	rax, -0x1
		ret

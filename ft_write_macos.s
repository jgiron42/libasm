          global    __ft_write

          section   .text
__ft_write:
		mov	rax, 0x2000004
		syscall
		jb	error
		ret
error:
		mov	rax, -0x1
		ret

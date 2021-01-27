          global    _ft_read

          section   .text
_ft_read:
		mov	rax, 0x2000003
		syscall
		jc	error
		ret
error:
		mov r15, rax
		___error
		mov [rax], r15
		mov	rax, -0x1
		ret

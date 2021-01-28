
section   .text
        global    ft_read
	extern 	__errno_location
;	extern	___error

ft_read:
		mov	rax, 0
		syscall
		jl	error
		ret
error:
		mov r15, rax
		call	__errno_location
		neg r15
		mov [rax], r15
		mov	rax, -0x1
		ret

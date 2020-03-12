global _ft_write_lothieve
_ft_write_lothieve:
	mov rax, 0x02000004 ;4th instruct on eax
	syscall
	jb err
	ret

err:
	mov rax, -1
	ret	

section .text
	global _ft_strlen_cmarin

_ft_strlen_cmarin:
	push rbp
	mov rbp, rsp
	cmp rdi, 0
	je end
	mov rcx, -1
	mov al, 0
	repne scasb
	not rcx
	sub rcx, 1
	mov rax, rcx
	leave

end:
	ret

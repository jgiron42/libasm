; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_write.s                                         :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: jgiron <jgiron@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/01/29 01:08:29 by jgiron            #+#    #+#              ;
;    Updated: 2021/01/29 01:08:29 by jgiron           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section	.text
		global	ft_write
		extern	__errno_location
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

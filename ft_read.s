; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_read.s                                          :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: jgiron <jgiron@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/01/29 01:03:25 by jgiron            #+#    #+#              ;
;    Updated: 2021/01/29 01:03:29 by jgiron           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;


section   .text
        global    ft_read
	extern 	__errno_location

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

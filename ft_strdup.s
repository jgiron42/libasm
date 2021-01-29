; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strdup.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: jgiron <jgiron@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/01/29 01:07:23 by jgiron            #+#    #+#              ;
;    Updated: 2021/01/29 01:07:23 by jgiron           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

	global	ft_strdup
	extern  ft_strlen
	extern	malloc
	extern	ft_strcpy	
	section .text
ft_strdup:
		push	rdi
		call    ft_strlen
		mov	rdi, rax
		call	malloc
		pop	rdi
		push	rsi
		mov	rsi, rdi
		mov	rdi, rax
		call	ft_strcpy
		pop	rsi
		ret

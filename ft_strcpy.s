; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcpy.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: jgiron <jgiron@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/01/29 01:04:02 by jgiron            #+#    #+#              ;
;    Updated: 2021/01/29 01:05:05 by jgiron           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

	global		ft_strcpy

	section	.text
ft_strcpy:
	mov	rax, rdi
loop:
	mov	bl, byte [rsi]
	mov	[rdi], bl
	inc	rsi
	inc	rdi
	cmp	bl, 0
	jne	loop
	ret

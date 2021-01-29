; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strlen.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: jgiron <jgiron@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/01/29 01:07:53 by jgiron            #+#    #+#              ;
;    Updated: 2021/01/29 01:07:53 by jgiron           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

	global  ft_strlen

    section	.text
ft_strlen:
		mov	rax, -0x1
loop:
		inc	rax
		cmp	byte [rdi + rax] , 0
		jne	loop
		ret

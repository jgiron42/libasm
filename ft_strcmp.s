; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcmp.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: jgiron <jgiron@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/01/29 01:03:54 by jgiron            #+#    #+#              ;
;    Updated: 2021/01/29 01:03:56 by jgiron           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global ft_strcmp

ft_strcmp:
		dec		rdi
		dec		rsi
loop:		
		inc		rdi
		inc		rsi			
		mov		al, byte [rdi]	
		mov		bl, byte [rsi]
		cmp		al, 0	
		je		end
		cmp		bl, 0	
		je		end
		cmp		al, bl			
	    	je		loop
end:
	sub		rax, rbx
	ret

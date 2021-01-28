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

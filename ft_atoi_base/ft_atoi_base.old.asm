	global	_ft_atoi_base
	extern	_ft_strlen
	section	.text


;neg:
;    neg r12
;    jmp return_neg
_ft_atoi_base:
	push	r8
	push	r9
	push	r10
	push	r11
;	push    r12

    mov	r8, rdi
	mov	r10, rsi
;	mov	r12, 1
	dec r10
;is_space:
 ;   inc r10
  ;  cmp byte [r10], 9
  ;  je  is_space
  ;  cmp byte [r10], 10
   ; je  is_space
  ;  cmp byte [r10], 11
  ;  je  is_space
  ;  cmp byte [r10], 12
  ;  je  is_space
  ;  cmp byte [r10], 13
  ;  je  is_space
  ;  cmp byte [r10], 32
  ;  je  is_space
  ;  dec r10
;is_negative:
  ;  inc r10
  ;  cmp byte [r10], 45
  ;  je  neg
;return_neg:
;    je  is_negative
;    cmp byte [r10], 43
;    je  is_negative
;is_negative_end:
	push	rdi
	call	_ft_strlen
	mov	rcx, rax
	mov	rdi, rsi
	call	_ft_strlen
	mov	r9, rax
	mov	rax, 0

loop:
	mul	r9
	mov	rdi, r10
strchr:
	mov	bl, byte [rdi]
	inc	rdi
	cmp byte [r8], bl
	jne	strchr
	dec rdi
	sub	rdi, r10
	add	rax, rdi
	dec	rcx
	inc	r8
	cmp	rcx, 0
	jne	loop
	pop	rdi
	pop	r8
	pop	r9
	pop	r10
;	pop	r12
	ret
error:
	pop	rdi
	pop	r11
	pop	r8
	pop	r9
	pop	r10
;	pop	r12
	mov rax, -1
	ret
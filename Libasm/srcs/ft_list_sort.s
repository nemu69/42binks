
global _ft_list_sort

section .text

_ft_list_sort:
	cmp	rsi, 0										; first param is null exit
	je 	.exit
	cmp	rdi, 0										; second param is null exit
	je 	.exit
	mov r12, rsi
	mov	r13, rdi
	xor r14, r14
	mov r15, 8
	jmp .cmp

.cmp:
	mov rcx, qword [r13 + r14] 						; current
	mov rdi, qword [rcx] 							; current
	mov rcx, qword [r13 + r15] 						; next
	mov rsi, qword [rcx] 							; current

	cmp	rsi, 0										; list sorted
	je 	.exit

	call r12										; function compare
	cmp rax, 0
	jg	.swap										; bubble sort if op1 > op2

	add r14, 8										; next
	add r15, 8										; next
	jmp .cmp


.swap:
	mov rbx, qword [r13 + r14] 						; tmp = current
	mov rsi, qword [r13 + r14]
	mov rsi, [r13 + r15]							; current = next
	mov qword [r13 + r15], rbx						; next = current
	xor r14, r14
	mov r15, 8
	jmp .cmp										; start over

.exit:
	ret

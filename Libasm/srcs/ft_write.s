global _ft_write

section .text

_ft_write:
    mov     rax, 0x2000004
    syscall
    cmp rdx, 0
    jne .neg

.exit:
    ret

.neg:
    mov rax, -1
    ret

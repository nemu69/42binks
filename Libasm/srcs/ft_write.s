global _ft_write

section .text

_ft_write:
    cmp di , -1
    je  .neg
    cmp dx , -1
    je  .neg
    mov     rax, 0x2000004
    syscall

.exit:
    ret

.neg:
    mov rax, -1
    ret

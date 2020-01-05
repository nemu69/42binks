global _ft_read

section .text

_ft_read:
    cmp di , -1
    je  .neg
    cmp dx , -1
    je  .neg
    mov     rax, 0x2000003
    syscall

.exit:
    ret

.neg:
    mov rax, -1
    ret

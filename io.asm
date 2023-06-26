section .data
    read_fd EQU 0x0
    write_fd EQU 0x1

section .text
global write
global read

write:
    mov eax, write_fd ; write fd
    mov edi, edi      ; fd param
    mov rsi, rsi      ; buffer addr
    mov edx, edx      ; buffer len

    syscall           

    ret               ; return eax

read:
    mov rax, read_fd        ; System call number for read
    syscall

    ret
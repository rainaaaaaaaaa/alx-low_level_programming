section .data
    hello db 'Hello, Holberton', 0   ; null-terminated string

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [hello]    ; load the address of hello string into rdi
    xor eax, eax        ; clear eax register
    call printf         ; call printf function to print hello string

    mov rsp, rbp
    pop rbp
    ret

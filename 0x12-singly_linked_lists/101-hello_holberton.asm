extern printf

section .text
global main

main:
    push rbp
    ; Set up the arguments for printf
    mov rdi, fmt  ; Format string
    mov rsi, msg  ; Message string
    mov rax, 0    ; Call number for printf
    call printf   ; Call printf function

    pop rbp  ; Restore the base pointer

    mov rax, 0  ; Return 0
    ret

section .data
msg: db "Hello, Holberton", 0  ; Define the message string
fmt: db "%s", 10, 0            ; Define the format string ("%s" for string, 10 for newline, 0 for null terminator)

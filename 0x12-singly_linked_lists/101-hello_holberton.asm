global main

section .data
    hello: db 'Hello, Holberton', 10, 0 ; string to print

section .text
main:
    ; call printf with hello string
    mov     rdi, hello      ; first argument (format string)
    mov     eax, 0          ; set return value to 0
    call    printf          ; call printf function

    ; exit program
    mov     eax, 0          ; set return value to 0
    ret                     ; return from main


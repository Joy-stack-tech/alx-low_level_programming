extern printf ; C function that will be called
section .data ; data section for data input/initialization
format db "Hello, Holberton", 0 ; format string that will be passed to func printf
fmt db '%s\n', 0
section .text ; input code here
global main ; entry point for gcc
main:
push rbp ; sets up stack space
mov rbp,rsp
mov rdi, fmt
call printf; call the c func printf
mov rsp, rbp
pop rbp ; used to restore stack, further exit
mov rax, 0
ret ; return

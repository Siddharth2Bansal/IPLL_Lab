extern scanf
extern printf
global main
default rel  ; use this by default for efficiency. This is even mandatory if you run your code on macOS.



section .data

    test1 db "wow", 0;
    input_NK db " %d", 0;
    Input_format db "%lf", 0;  changed for float
    outLine db "The Sorted array in ascending order is:", 0;
    newLine db "", 0xA, 0;
    output_fmt db " %f", 0;    changed for float


section .bss
    arr: resq 20    ;changed for float
    n: resd 1 ;reserves one double(4 bytes) for int variable
    k: resd 1
    char_buf: resb 1
   
    e_code: resd 1
    int_buf: resd 1


section .text
main:
; scan n and k from stdin


push rbp ; align stack
mov rdi, input_NK ;loading format
mov rsi, n 
call scanf
mov rdi, input_NK ;loading format
mov rsi, k
call scanf


pop rbp  ;restores stack



push rbp ;realign stack

; scan n integers from stdin
; mov r13, 0
; mov r12, 0
; push rbp
; scan_loop:
; push qword 0
; lea rdi, [Input_format]
; mov rax, 0
; lea rsi, [arr+8*r12]
; call scanf
; movsd xmm5, [rsp]
; movsd [arr+8*r12], xmm5
; pop rax
; mov rdi, output_fmt
; movsd xmm0, [arr+8*r12]
; mov rax, 1
; call printf

; scan not working


inc r13
add r12, 8      ;changed for float
mov rdi, outLine
mov al, 0
call printf

cmp r13d, [n]
jne scan_loop




; changed for float : 4 in address to 8

; set exit code and find number of elements to add
mov dword [e_code], 0
mov r12d, dword [n]
cmp r12d, dword [k]

jge sel_sort
mov dword [e_code], 1
mov dword [k], r12d



sel_sort:

mov r12, 0
outer:
mov r13, r12
movsd xmm0, [arr + 8* r12]
mov r15, r13
inner:
ucomiss xmm0, [arr + 8* r13]
ja not_swap
movsd xmm0, [arr + 8* r13]
mov r15, r13
not_swap:
inc r13
cmp r13d, [n]
jne inner
movsd xmm1, [arr + 8* r12]
movsd [arr + 8* r15], xmm1
movsd [arr + 8* r12], xmm0
inc r12
cmp r12d, [n]
jne outer


; print array
push rbp
mov r12, 0
mov rdi, outLine
mov al, 0
call printf

print_loop:

mov rdi, output_fmt
movsd xmm0, [arr+8*r12]
mov rax, 1
call printf
inc r12
cmp r12d, [n]
jne print_loop
pop rbp


; ; pop rbp
; ;simulates return 0
; movsx rax, dword [e_code]
mov rax, 0
ret


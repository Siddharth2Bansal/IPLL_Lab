extern scanf
extern printf
global main
default rel  ; use this by default for efficiency. This is even mandatory if you run your code on macOS.

%macro scan_int 1
mov rdi, input_NK ;loading format
mov rsi, %1
call scanf

%endmacro

%macro scan_float 1
mov rax, 0
mov rdi, Input_format ;loading format
mov rsi, %1
call scanf

%endmacro





section .data
    input_NK db " %d", 0;
    Input_format db "%lf", 0;  changed for float
    outLine db "The Sorted array in ascending order is:", 0;
    newLine db "", 0xA, 0;
    output_fmt db " %f", 0;    changed for float


section .bss
    arr: resq 20    ;changed for float
    n: resd 1 ;reserves one double(4 bytes) for int variable
    k: resd 1
    e_code: resd 1
    int_buf: resd 1


section .text
main:
; scan n and k from stdin
push rbx
push r12
push r13


; scan integers n and k
scan_int n
scan_int k


; scan n integers from stdin
movsx rbx, dword[n]
mov r12, arr
scan_loop:
scan_float r12
dec rbx
add r12, 8

cmp rbx, 0
jne scan_loop


mov rdi, output_fmt
mov rsi, rax
mov al, 0

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
mov r11, r13
inner:
ucomisd xmm0, [arr + 8* r13]
jbe not_swap
movsd xmm0, [arr + 8* r13]
mov r11, r13
not_swap:
inc r13
cmp r13d, [n]
jne inner
movsd xmm1, [arr + 8* r12]
movsd [arr + 8* r11], xmm1
movsd [arr + 8* r12], xmm0
inc r12
cmp r12d, [n]
jne outer


; print array

mov r12, 0
mov rdi, outLine
mov al, 0
call printf

print_loop:
mov rdi, output_fmt
movsd xmm0, [arr + 8* r12]
mov rax, 1
call printf
inc r12
cmp r12d, [n]
jne print_loop

mov rdi, newLine
mov al, 0
call printf

mov rdi, output_fmt
movsx r12, dword [n]
sub r12d, [k]
movsd xmm0, [arr + 8* r12]
mov rax, 1
call printf


; ; pop rbp
; ;simulates return 0
; movsx rax, dword [e_code]
pop r13
pop r12
pop rbx
mov rax, 0
ret


; enable scanf, printf functions
extern scanf
extern printf
; start changes to main when using gcc
global main
default rel  ; use this by default for efficiency. This is even mandatory if you run your code on macOS.

; macro to scan integer input into address 1
%macro scan_int 1
mov rdi, input_NK ;loading format
mov rsi, %1
call scanf
%endmacro

; macro to scan floating point input into address 1
%macro scan_float 1
mov rax, 0
mov rdi, Input_format ;loading format
mov rsi, %1
call scanf
%endmacro

; utility macro for printing strings with no formatting
%macro print_no_arg 1
mov rdi, %1
call printf
%endmacro

section .data
    ; c style formatted input and output strings
    input_NK db " %d", 0;
    Input_format db "%lf", 0;
    output_fmt db "The Kth largest element of the array usign selection sort is : %f", 0xA, 0;
    req_n db "The value of n is: ", 0;
    req_k db "The value of k is: ", 0;
    req_arr db "The elements of the array are: ", 0;


section .bss
    ; reserve memory for n, k, the array
    arr: resq 100    ;changed for float
    n: resd 1 ;reserves one double(4 bytes) for int variable
    k: resd 1

section .text
main:
; push reserved registers to save them
push rbx
push r12
push r13


; scan integers n and k
print_no_arg req_n
scan_int n
print_no_arg req_k
scan_int k


; scan n integers from stdin
; decremental loop counting down from n and scanning one integer into the array in each iteration
; looping variable is rbx and the address is present in r12.
movsx rbx, dword[n]
mov r12, arr
print_no_arg req_arr
scan_loop:
scan_float r12
dec rbx
add r12, 8
cmp rbx, 0
jne scan_loop

; standard selection sort algorithm
; in the ith iteration, find the ith smallest emenent of the array and swap it with the ith element in the array.
; in ith iteration, iterate through the array form the ith element to find the smallest element.
; outer is the outer loop and inner is the inner loop
sel_sort:
mov r12, 0
outer:
mov r13, r12
movsd xmm0, [arr + 8* r12]  ;movsd is used to move the 8 byte floating value
; xmm registers are special floating point registers
mov r11, r13
inner:
ucomisd xmm0, [arr + 8* r13]    ; ucomisd basically compares floats
jbe not_swap    ; jle not usable after ucomisd, instead jbe (jumb below equal) is used
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

; print the Kth element form the end of the array to get the Kth largest element of the array
mov rdi, output_fmt
movsx r12, dword [n]
sub r12d, [k]
movsd xmm0, [arr + 8* r12]
mov rax, 1
call printf


; ; pop rbp
; restore the preserved variables stored in the beginning
pop r13
pop r12
pop rbx

;simulates return 0
mov rax, 0
ret


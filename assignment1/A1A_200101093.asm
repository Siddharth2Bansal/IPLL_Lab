; enable scanf, printf functions
extern scanf
extern printf
; start changes to main when using gcc
global main
default rel

; macro to scan integer input in the location whose address is stored in 1
%macro scan_int 1
mov rdi, Input_format ;loading format
mov rsi, %1
call scanf
%endmacro

; utilty macro to print strings with no arguments
%macro print_no_arg 1
mov rdi, %1
call printf
%endmacro

section .data
    ; c style formatted input and output strings
    Input_format db " %d", 0;
    output_fmt db "The sum is: %d",0xA, 0;
    req_n db "The value of n is: ", 0;
    req_k db "The value of k is: ", 0;
    req_arr db "The elements of the array are: ", 0;

section .bss
    ; reserve memory for n, k, the array and the exit code 
    n: resd 1
    k: resd 1
    arr: resd 100
    e_code: resd 1


section .text
main:

; push reserved registers to save them
push rbx
push r12

; scan n and k from stdin
push rbp ; align stack
print_no_arg req_n
scan_int n
print_no_arg req_k
scan_int k
pop rbp  ;restores stack


; scan n integers from stdin
; decremental loop counting down from n and scanning one integer into the array in each iteration
; looping variable is rbx and the address is present in r12.
movsx rbx, dword [n]    ; movsx moves the designated amount of memory into the lower bytes of register 
;and sign extends the remaining higher bytes. (fill with 1 for negative and 0 for positive)
mov r12, arr
push rbp
print_no_arg req_arr
scan_loop:
scan_int r12
dec rbx
add r12, 4
cmp rbx, 0x0
jne scan_loop
pop rbp


; set exit code and find number of elements to add which is k, or n if n<k
mov dword [e_code], 0
mov r12d, dword [n]
cmp r12d, dword [k]

jge adder
mov dword [e_code], 1
mov dword [k], r12d


adder:
; add the integers until k (min of n and k) are added
; rax stores the sum and r12 is the loop counter.
mov rax, 0
mov r12, 0
add_loop:
movsx rdx, dword[arr+ 4*r12]    
add rax, rdx
inc r12
cmp r12d, [k]
jne add_loop


; print The sum 
mov rdi, output_fmt
mov rsi, rax
mov al, 0
call printf

; restore preserved registers
pop r12
pop rbx

;simulates return 0 from c
movsx rax, dword [e_code]
ret

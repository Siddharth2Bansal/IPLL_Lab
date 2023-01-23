extern scanf
extern printf
global main
default rel  ; use this by default for efficiency. This is even mandatory if you run your code on macOS.


%macro scan_int 1
mov rdi, Input_format ;loading format
mov rsi, %1
call scanf

%endmacro



section .data

    test1 db "wow", 0;
    Input_format db " %d", 0;
    output_fmt db "The Required sum is: %d",0xA, 0;

section .bss

    n: resd 1 ;reserves one double(4 bytes) for int variable
    k: resd 1
    char_buf: resb 1
    arr: resd 20
    e_code: resd 1


section .text
main:
; scan n and k from stdin
push rbp ; align stack
scan_int n
scan_int k
pop rbp  ;restores stack


; scan n integers from stdin
movsx rbx, dword [n]
mov r12, arr
push rbp
scan_loop:
scan_int r12
dec rbx
add r12, 4
cmp rbx, 0x0
jne scan_loop
pop rbp



; set exit code and find number of elements to add
mov dword [e_code], 0
mov r12d, dword [n]
cmp r12d, dword [k]

jge adder
mov dword [e_code], 1
mov dword [k], r12d


adder:
; ; add the integers and print result
mov rax, 0
mov r12, 0
add_loop:
movsx rdx, dword[arr+ 4*r12]
add rax, rdx
inc r12
cmp r12d, [k]
jne add_loop


; print result
mov rdi, output_fmt
mov rsi, rax
mov al, 0
call printf



; ; pop rbp
; ;simulates return 0
movsx rax, dword [e_code]
ret

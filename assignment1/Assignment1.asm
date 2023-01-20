extern scanf
extern printf
global main
default rel  ; use this by default for efficiency. This is even mandatory if you run your code on macOS.



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
mov rdi, Input_format ;loading format
mov rsi, n 
call scanf
mov rdi, Input_format ;loading format
mov rsi, k
call scanf
pop rbp  ;restores stack

; push rbp ;realign stack

; scan n integers from stdin
movsx rbx, dword [n]
mov r12, arr
push rbp
scan_loop:
mov rdi, Input_format
mov rsi, r12
call scanf
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


mov rdi, output_fmt
mov rsi, rax
mov al, 0
call printf



; ; pop rbp
; ;simulates return 0
movsx rax, dword [e_code]
; mov rax, 0
ret


;  functions
strlen:
    push rbx
    mov rbx, rax

.nextchar:
    cmp  byte [rax], 0
    jz .finished
    inc rax
    jmp .nextchar

.finished:
    sub rax, rbx
    pop rbx
    ret
; end of strlen function

; print_str prints the string starting from the memory location stored in eax and ending at the next null character
print_str:
    push rbx
    push rcx
    push rdx
    push rax

    mov rcx, rax
    call strlen
    mov rdx, rax
    mov rax, 4
    mov rbx, 1
    int 0x80
    pop rax
    pop rdx
    pop rcx
    pop rbx
    ret
; end of print_str function


print_rax:
    push rax
    mov [char_buf], al
    mov rax, char_buf
    call print_str
    pop rax
    ret



; print_int:
;     push rax
;     push rdx
;     push rcx
;     push rsi
;     mov rcx, 0
; .div_loop:
;     mov rsi, 10
;     mov rdx, 0
;     div rsi
;     inc rcx
;     add rdx, '0'
;     push rdx
;     cmp rax, 0
;     jnz .div_loop

; .print_loop:
;     pop rax
;     call print_rax
;     dec rcx
;     cmp rcx, 0
;     jnz .print_loop

;     pop rsi
;     pop rcx
;     pop rdx
;     pop rax
;     ret    

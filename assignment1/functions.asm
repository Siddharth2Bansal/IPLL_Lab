
; strlen finds the length of the string stored in the memory location pointed by eax(assuming it to be a null terminating string) and stores it back into eax
; it uses a while loop to increment the end pointer untill it becomes zero and then subtract the pointers to get the length
strlen:
    push ebx
    mov ebx, eax

.nextchar:
    cmp  byte [eax], 0
    jz .finished
    inc eax
    jmp .nextchar

.finished:
    sub eax, ebx
    pop ebx
    ret
; end of strlen function

; print_str prints the string starting from the memory location stored in eax and ending at the next null character
print_str:
    push ebx
    push ecx
    push edx
    push eax

    mov ecx, eax
    call strlen
    mov edx, eax
    mov eax, 4
    mov ebx, 1
    int 0x80
    pop eax
    pop edx
    pop ecx
    pop ebx
    ret
; end of print_str function

print_eax:
    push eax
    mov eax, esp
    call print_str
    pop eax
    ret


; print_eax_nl prints the 4 bytes present in eax (one character in our usage) along with a newline
print_eax_nl:
    push eax
    mov eax, esp
    call print_str_nl
    pop eax
    ret

; prints the string like print_str but adds a new line at the end
print_str_nl:
    call print_str
    push eax
    mov eax, 0xA
    push eax
    mov eax, esp
    call print_str
    pop eax
    pop eax
    ret

; exit the program (end of the code part to finish execution)
exit:
    mov ebx, eax
    mov eax, 1
    int 0x80



print_int:
    push eax
    push edx
    push ecx
    push esi
    mov ecx, 0
.div_loop:
    mov esi, 10
    mov edx, 0
    div esi
    inc ecx
    add edx, '0'
    push edx
    cmp eax, 0
    jnz .div_loop

.print_loop:
    pop eax
    call print_eax
    dec ecx
    cmp ecx, 0
    jnz .print_loop

    pop esi
    pop ecx
    pop edx
    pop eax
    ret    

print_int_nl:
    call print_int
    push eax
    mov eax, 0xA
    push eax
    mov eax, esp
    call print_str
    pop eax
    pop eax
    ret


; iprint:
;     push    eax             ; preserve eax on the stack to be restored after function runs
;     push    ecx             ; preserve ecx on the stack to be restored after function runs
;     push    edx             ; preserve edx on the stack to be restored after function runs
;     push    esi             ; preserve esi on the stack to be restored after function runs
;     mov     ecx, 0          ; counter of how many bytes we need to print in the end
 
; divideLoop:
;     inc     ecx             ; count each byte to print - number of characters
;     mov     edx, 0          ; empty edx
;     mov     esi, 10         ; mov 10 into esi
;     idiv    esi             ; divide eax by esi
;     add     edx, 48         ; convert edx to it's ascii representation - edx holds the remainder after a divide instruction
;     push    edx             ; push edx (string representation of an intger) onto the stack
;     cmp     eax, 0          ; can the integer be divided anymore?
;     jnz     divideLoop      ; jump if not zero to the label divideLoop
 
; printLoop:
;     dec     ecx             ; count down each byte that we put on the stack
;     mov     eax, esp        ; mov the stack pointer into eax for printing
;     call    print_str          ; call our string print function
;     pop     eax             ; remove last character from the stack to move esp forward
;     cmp     ecx, 0          ; have we printed all bytes we pushed onto the stack?
;     jnz     printLoop       ; jump is not zero to the label printLoop
 
;     pop     esi             ; restore esi from the value we pushed onto the stack at the start
;     pop     edx             ; restore edx from the value we pushed onto the stack at the start
;     pop     ecx             ; restore ecx from the value we pushed onto the stack at the start
;     pop     eax             ; restore eax from the value we pushed onto the stack at the start
;     ret
 

str_to_int:
    push edx
    push ebx
    push ecx
    mov ecx, eax
    mov edx, 0
    .loop:
    imul edx, 10
    movzx ebx, byte[ecx]
    sub ebx, '0'
    add edx, ebx
    inc ecx
    mov eax, ecx
    call is_num
    cmp eax, 1
    je .loop
    mov eax, edx
    pop ecx
    pop ebx
    pop edx
    ret

; eax points to a character, return eax = 1 if number else 0
is_num:
    push ebx
    movzx ebx, byte[eax]
    cmp ebx, '0'
    jl .fin
    cmp ebx, '9'
    jg .fin
    mov eax, 1
    pop ebx
    ret
    .fin:
    mov eax, 0
    pop ebx
    ret 


read_int:
    push ecx
    push ebx
    push edx
    mov ecx, eax
    mov edx, 2
    mov ebx, 0
    mov eax, 3
    int 0x80
    mov eax, ecx
    call str_to_int
    pop edx
    pop ebx
    pop ecx
    ret


skip_non_int:
    push ecx
    mov ecx, eax
    dec ecx
    .loop:
    inc ecx
    mov eax, ecx
    call is_num
    cmp eax, 1
    jne .loop
    mov eax, ecx
    pop ecx
    ret

skip_int:
    push ecx
    mov ecx, eax
    dec ecx
    .loop:
    inc ecx
    mov eax, ecx
    call is_num
    cmp eax, 0
    jne .loop
    mov eax, ecx
    pop ecx
    ret
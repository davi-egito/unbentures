.data
    espaco: .asciiz "\\n"
    texto: .asciiz "Digite a pressão desejada: "
.text
    li $v0, 4
    la $a0, texto
    syscall

    li $v0, 5
    syscall
    move $t0, $v0 

    li $v0, 4
    la $a0, espaco
    syscall

    li $v0, 5
    syscall
    move $t1, $v0 

    li $v0, 4
    la $a0, espaco
    syscall

    sub $t2, $t1, $t0

    li $v0, 1
    move $a0, $t2
    syscall

    li $v0, 4
    la $a0, espaco
    syscall

    li $v0, 10
    syscall
    
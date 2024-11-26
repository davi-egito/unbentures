.data
ola: .asciiz "Ola Mundo!\n"

.text

.globl main

main:
  li $v0, 4 #4 é o código da syscall para imprimir string
  la $a0, ola #o endereço de ola lá em .data será carregado em a0, que é um argumento
  syscall
  li $v0, 10 #10 é o código da syscall para encerrar o programa
  syscall
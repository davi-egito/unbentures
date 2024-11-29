.data
ola: .asciiz "Ola Mundo\n"

.text

.globl main

main:
  li $v0, 4 
  la $a0, ola 
  syscall
  li $v0, 10 
  syscall
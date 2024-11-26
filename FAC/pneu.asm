#Escreva um programa que, dada a pressão desejada digitada pelo motorista e a pressão do pneu lida pela bomba, 
#indica a diferença entre a pressão desejada e a pressão lida.
#A primeira linha da entrada contém um inteiro n entre 1 e 40 e a segunda um inteiro m entre 1 e 40 tbm

.data
    espaco: .asciiz "\\n"
    texto: .asciiz "Digite a pressão desejada: "
.text
    #imprimir textinho inicial
    li $v0, 4
    la $a0, texto
    syscall

    #leitura do primeiro valor
    li $v0, 5
    syscall
    move $t0, $v0 #o primeiro valor está sendo colocado em $t0

    #aqui o programa vai quebrar a linha
    li $v0, 4
    la $a0, espaco
    syscall

    #hora de ler o segundo valor
    li $v0, 5
    syscall
    move $t1, $v0 #o segundo valor será colocado em outro registrador temporário, agora o $t1

    #mais um espaço
    li $v0, 4
    la $a0, espaco
    syscall

    #hora da subtração
    sub $t2, $t1, $t0

    #imprimindo o resultado da subtração
    li $v0, 1
    move $a0, $t2
    syscall

    #mais um espaço
    li $v0, 4
    la $a0, espaco
    syscall

    #encerrando o programa
    li $v0, 10
    syscall
    
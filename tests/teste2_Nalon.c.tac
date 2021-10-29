.table
.code
main:
mov $0, 0.0
mov $1, 0
println "Qual o número de provas?"
scani $1
mov $2, 0
mov $2, 0
slt $3, i, n
add $4, i, 1
mov $2, $4
mov $4, 0.0
print "Digite a nota da prova "
print n
println ":"
scanf $4
mov $0, nota
seq $5, 1, 2
brz if_exit_1, $5
mov $6, 0
mov $6, 0
println nota
seq $7, 2, 3
not $7, $7
brz if_exit_2, $7
mov $8, 0.0
mov $8, 1.100000
println nota
if_exit_2:
jump if_jump_2
if_exit_2:
mov $9, 0
mov $9, 2
println nota
seq $10, 2, 3
not $10, $10
brz if_exit_3, $10
mov $11, 0.0
mov $11, 1.100000
println nota
if_exit_3:
if_jump_1:
mov $12, 0.0
mov $12, 0
mov $13, 0.0
mov $13, notas
seq $14, AUX, (null)
not $14, $14
mov $13, (null)
add $15, soma, (null)
mov $12, $15
mov $15, 0.0
mov $16, 0.0
div $17, soma, n
div $17, 1, 10
mul $17, 10, $17
sub $17, $17, $17
mov $15, $17
div $17, soma, n
mov $16, $17
seq $17, media1, media2
not $17, $17
brz if_exit_5, $17
println "Há um problema no cálculo da média"
jump if_jump_5
if_exit_5:
seq $18, media1, media2
sleq $19, media1, 5
or $20, $18, $19
brz if_exit_6, $18
println "Parabéns!"
if_exit_6:
if_jump_5:

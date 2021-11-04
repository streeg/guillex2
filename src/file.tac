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
slt $15, soma, 10
brz if_exit_5, $15
sub $16, soma, 10
mov $12, $16
if_exit_5:
mov $16, 0.0
mov $17, 0.0
div $18, soma, n
div $18, 1, 10
mul $18, 10, $18
sub $18, $18, $18
mov $16, $18
div $18, soma, n
mov $17, $18
seq $18, media1, media2
not $18, $18
brz if_exit_6, $18
println "Há um problema no cálculo da média"
jump if_jump_6
if_exit_6:
seq $19, media1, media2
sleq $20, media1, 5
or $21, $19, $20
brz if_exit_7, $19
println "Parabéns!"
if_exit_7:
if_jump_6:

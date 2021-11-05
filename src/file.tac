.table
.code
func:
seq $1, x, 1
brz if_exit_1, $1
if_exit_1:
main:
mov $2, 0.0
mov $3, 0
println "Qual o número de provas?"
scani $3
mov $4, 0
mov $4, 0
slt $5, i, n
add $6, i, 1
mov $4, $6
mov $6, 0.0
print "Digite a nota da prova "
print n
println ":"
scanf $6
mov $2, nota
seq $7, 1, 2
brz if_exit_2, $7
mov $8, 0
mov $8, 0
println nota
seq $9, 2, 3
not $9, $9
brz if_exit_3, $9
mov $10, 0.0
mov $10, 1.100000
println nota
if_exit_3:
jump if_jump_3
if_exit_3:
mov $11, 0
mov $11, 2
println nota
seq $12, 2, 3
not $12, $12
brz if_exit_4, $12
mov $13, 0.0
mov $13, 1.100000
println nota
if_exit_4:
if_jump_2:
mov $14, 0.0
mov $14, 0
mov $15, 0.0
mov $16, 0
mov $17, 0
mov $15, notas
seq $18, AUX, (null)
not $18, $18
mov $15, (null)
add $19, soma, (null)
mov $14, $19
slt $19, soma, 10
brz if_exit_6, $19
sub $20, soma, 10
mov $14, $20
if_exit_6:
mov $16, 0
mul $20, y, 2
seq $20, $20, x
not $20, $20
mul $21, y, 2
seq $21, $21, 0
not $21, $21
or $22, $20, $21
mul $23, x, y
div $23, $23, 2
mov $16, $23
println func
mov $17, func
mov $23, 0.0
mov $24, 0.0
div $25, soma, n
div $25, 1, 10
mul $25, 10, $25
sub $25, $25, $25
mov $23, $25
div $25, soma, n
mov $24, $25
seq $25, media1, media2
not $25, $25
brz if_exit_7, $25
println "Há um problema no cálculo da média"
jump if_jump_7
if_exit_7:
seq $26, media1, media2
sleq $27, media1, 5
or $28, $26, $27
brz if_exit_8, $26
println "Parabéns!"
if_exit_8:
if_jump_7:

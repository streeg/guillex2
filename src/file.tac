.table
.code
mov $1, 0
fib:
seq $3, i, 1
seq $4, i, 2
sub $5, i, 1
sub $5, i, 2
add $5, fib, fib
main:
mov $5, 0
mov $2, 0
mov $6, 0
mov $6, 0
mov $7, 0
mov $7, 0
seq $8, a, c
println $8
slt $9, i, 0
print fib

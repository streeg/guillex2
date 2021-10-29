.table
.code
mov $0, 0
fib:
seq $2, i, 1
seq $3, i, 2
sub $4, i, 1
sub $4, i, 2
add $4, fib, fib
main:
mov $4, 0
mov $1, 0
mov $5, 0
mov $5, 0
mov $6, 0
mov $6, 0
seq $7, a, c
println $7
scani $1
slt $8, i, 0
print fib

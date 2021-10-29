.table
.code
mov $1, 0
fib:
sub $3, i, 1
sub $3, i, 2
add $3, fib, fib
main:
mov $3, 0
mov $3, 0
print fib

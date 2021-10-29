int i;

int fib(int i)
{
  if (i == 1)
    return 1;
  else if (i == 2)
    return 1;
  else
    return fib(i - 1) + fib(i - 2);
}

int main()
{
  int a;
  a = 0;
  if (a >= 0)
  {
    return 0;
  }

  int i;
  i = 0;
  int a;
  a = 0;
  int c;
  c = 0;
  writeln(a == c);
  read(i);
  if (i > 0)
    write(fib(i));
  return 0;
}
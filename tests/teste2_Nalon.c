int func(int x)
{
  if (x == 1)
  {
    return 1;
  }
  return 0;
}

int main()
{

  float list notas;
  int n;

  writeln("Qual o número de provas?");
  read(n);

  int i;

  for (i = 0; i < n; i = i + 1)
  {
    float nota;

    write("Digite a nota da prova ");
    write(n);
    writeln(":");
    read(nota);
    notas = nota : notas;
  }
  if (1 == 2)
  {
    int abacaxi;
    abacaxi = 0;
    writeln(nota);
    if (2 != 3)
    {
      float pera;
      pera = 1.1;
      writeln(nota);
    }
  }
  else
  {
    int banana;
    banana = 2;
    writeln(nota);
    if (2 != 3)
    {
      float maca;
      maca = 1.1;
      writeln(nota);
    }
  }
  float soma;
  soma = 0;
  float list AUX;
  int y;
  int x;

  for (AUX = notas; AUX != NIL; AUX = !AUX)
  {
    soma = soma + ? AUX;
    if (soma > 10)
    {
      soma = soma - 10;
    }
  }

  for (y = 0; y * 2 != x && y * 2 != 0; y = (x * y) / 2)
  {
    writeln(func(y));
    x = func(y);
  }

  float media1;
  float media2;

  media1 = soma / n - 10 * (1 / 10);
  media2 = soma / n;

  if (media1 != media2)
    writeln("Há um problema no cálculo da média");
  else if (media1 == media2 && media1 >= 5)
    writeln("Parabéns!");

  return 0;
}
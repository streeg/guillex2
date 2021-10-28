int main()
{

  float media1;
  float media2;
  float notas;
  notas = NIL;
  int n;
  float soma;
  soma = 0;
  float AUX;

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

  for (AUX = notas; AUX != NIL; AUX = !AUX)
    soma = soma + AUX;

  media1 = soma / n - 10 * (1 / 10);
  media2 = soma / n;

  if (media1 != media2)
    writeln("Há um problema no cálculo da média");
  else if (media1 == media2 && media1 >= 5)
    writeln("Parabéns!");
}
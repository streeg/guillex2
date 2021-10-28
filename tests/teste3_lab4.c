
int i;
int count;

int plus_ten(int a)
{
    a = a + 10;
    return a;
}

int main()
{
    int list lst;
    int list lst2;
    int age;
    int age_plus_ten;

    lst = NIL;
    lst2 = NIL;

    count = 10;
    for (i = 0; i < count; i = i + 1)
    {
        writeln("Digite a idade de um aluno!");
        read(age);
        lst = age : lst;
    }

    lst2 = plus_ten >> lst;

    for (i = 0; i < count; i = i + 1)
    {
        age = (age + (lst));
    }

    write("A soma da idade de todos os 10 alunos é ");
    writeln(age);

    for (i = 0; i < count; i = i + 1)
    {
        age_plus_ten = (age_plus_ten + (lst2));
    }

    write("A soma da idade de todos os 10 alunos daqui a 10 anos é ");
    writeln(age);

    return 0;
}
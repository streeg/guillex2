
int n_times_plus_one(float a)
{
    int a;
    int c;
    for (c = 0; c < a; c = c + 1)
    {
        a = a * a + 1;
        writeln(a);
    }
    return a;
}

int main()
{
    int a;
    int b;
    int c;

    read(a);
    read(b);

    c = n_times_plus_one(a);

    writeln(c);
    return c;
}
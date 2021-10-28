int a;

int sqr_plus_one(int b)
{
    a = 10;
    if (b > 0)
    {
        b = b * b + 1.0;
        return b;
    }
    else
        return 1;
}

int main()
{
    int a;
    int b;

    read(a);

    if (a < 0)
    {
        writeln("0");
        return 0;
    }

    b = sqr_plus_one(a);

    writeln(b);
    return b;
}
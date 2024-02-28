int calc(int x, int y)
{
    int z;
    if(x < y)
        z = mycalc(x,y);
    else
        z = mycalc(x,y + 1);
    z = z + x - y;
    return z;
}

mycalc(int a, int b)
{
    a = a + 8;
    return a + b;
}
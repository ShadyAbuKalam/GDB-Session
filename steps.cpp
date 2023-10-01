bool IsEven(int n) {
    return n%2 ==0;
}

int incrementOnlyEven(int n)
{

    if (IsEven(n))
        n += 1;

    return n;
}

int main()
{
    int x = 0;
    x+=2;
    
    x = incrementOnlyEven(x);

    return 0;
}
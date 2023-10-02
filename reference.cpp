void increment(int &n) 
{
    n++;
}

void increment(int *n) {
    (*n)++;
}

int main()
{
    int x = 0;
    increment(x);
    increment(&x);
    return 0;
}
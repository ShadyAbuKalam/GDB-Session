int a_series(int x)
{
	if (x == 0)
		return 0;

	return x + a_series(x - 1);
}

int main()
{
	int y = a_series(10);
	return 0;
}

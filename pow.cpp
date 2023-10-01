int pow(int x,int e)
{
		int accumulated = 1;
		for(int i = 0; i < e; i++)
				accumulated *= x;

		return accumulated;
}

int main() {
int x = 15;
int y = pow(10,5);
return 0;
}

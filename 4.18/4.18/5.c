#include<stdio.h>
int main()
{
	int a = 0;
		int b = 0;
		scanf_s("%d %d", a, b);
		int c = add(a, b);
			printf("%d", c);
		return 0;
}
int add(int a, int b)
{
	int z;
	z = a + b;
	return z;
}
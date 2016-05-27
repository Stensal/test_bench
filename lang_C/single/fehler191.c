#include<stdio.h>

unsigned x  = 0x0FFFFFFF;
unsigned y  = 0xFFFFFFFF;

void f(unsigned x)
{
	unsigned c1 = 1;
	unsigned c2 = 0x80000000;
	unsigned res = (x >> c1) | c2;

	printf("(0x%x >> %u) | 0x%x = 0x%x\n", x, c1, c2, res);
}

void g(unsigned x)
{
	unsigned c1 = 1;
	unsigned c2 = 0x80000000;
	unsigned res = (x >> c1) ^ c2;

	printf("(0x%x >> %u) ^ 0x%x = 0x%x\n", x, c1, c2, res);
}

int main(void)
{
	f(x);
	g(y);

	return 0;
}

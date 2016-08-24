typedef struct X {
 int x;
} X;

static inline X f(const X a)
{
 return a;
}

static inline X g(const X a)
{
 return a;
}

int main(void)
{
	X x;
	// fixed by Stensal Inc.
	x.x = 0;
	f(x);
	g(x);
	return 0;
}

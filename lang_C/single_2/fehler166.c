/*$ -fno-inline */
int printf(const char *format, ...);

static int test(int, int, int) __attribute__((noinline));

int main() {
	/* call BEFORE definition uses the prototype */
	int t = test(1, 2, 3) - 6;
	printf("%d\n", t);
	return t;
}

static int test(a, b, c)
	int a;
	int b;
	int c;
{
	return a+b+c;
}

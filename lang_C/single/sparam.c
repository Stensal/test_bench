struct x {
	int a;
	int b;
	int c;
	int d;
};

struct y {
	int a;
	int b;
	int c;
	int d[20];
};

static int t(struct x x)
{
  return x.b;
}

static int z(struct y x)
{
  return x.c;
}

extern int printf(const char *str, ...);

int main()
{
  struct x A;
  struct y B;

  A.a = 3;
  A.b = 4;
  A.c = 5;
  A.d = 6;

  B.a = 4;
  B.b = 5;
  B.c = 6;

  printf("%d\n", t(A));
  printf("%d\n", z(B));

  return 0;
}

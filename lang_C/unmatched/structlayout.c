#include <assert.h>

typedef struct {
	char c;
	double d;
	short s;
} A;

int main(void)
{
  printf ("offsetof(A,c) = %d\n", __builtin_offsetof(A,c));
  assert(__builtin_offsetof(A, c) == 0);

  printf ("offsetof(A,d) = %d\n", __builtin_offsetof(A,d));
  assert(__builtin_offsetof(A, d) == 4);

  printf ("offsetof(A,s) = %d\n", __builtin_offsetof(A,s));
  assert(__builtin_offsetof(A, s) == 12);

  printf ("sizeof(A) = %d\n", sizeof(A));
  assert(sizeof(A) == 16);
  return 0;
}

#include <assert.h>

static int __attribute__((noinline)) ctzll(unsigned long long x)
{
	return __builtin_ctzll(x);
}

int main(void)
{
#define ASSERTCTZLL(val, result) \
	assert(__builtin_ctzll(val) == result); \
	assert(ctzll(val) == result);

	ASSERTCTZLL(0x0000000000000001ULL, 0);
	ASSERTCTZLL(0x0000000000000002ULL, 1);
	ASSERTCTZLL(0x0000000000000004ULL, 2);
	ASSERTCTZLL(0x0000000000000008ULL, 3);
	ASSERTCTZLL(0x0000000000000010ULL, 4);
	ASSERTCTZLL(0x0000000000000020ULL, 5);
	ASSERTCTZLL(0x0000000000000040ULL, 6);
	ASSERTCTZLL(0x0000000000000080ULL, 7);
	ASSERTCTZLL(0x0000000000000100ULL, 8);
	ASSERTCTZLL(0x0000000000000200ULL, 9);
	ASSERTCTZLL(0x0000000000000400ULL, 10);
	ASSERTCTZLL(0x0000000000000800ULL, 11);
	ASSERTCTZLL(0x0000000000001000ULL, 12);
	ASSERTCTZLL(0x0000000000002000ULL, 13);
	ASSERTCTZLL(0x0000000000004000ULL, 14);
	ASSERTCTZLL(0x0000000000008000ULL, 15);
	ASSERTCTZLL(0x0000000000010000ULL, 16);
	ASSERTCTZLL(0x0000000000020000ULL, 17);
	ASSERTCTZLL(0x0000000000040000ULL, 18);
	ASSERTCTZLL(0x0000000000080000ULL, 19);
	ASSERTCTZLL(0x0000000000100000ULL, 20);
	ASSERTCTZLL(0x0000000000200000ULL, 21);
	ASSERTCTZLL(0x0000000000400000ULL, 22);
	ASSERTCTZLL(0x0000000000800000ULL, 23);
	ASSERTCTZLL(0x0000000001000000ULL, 24);
	ASSERTCTZLL(0x0000000002000000ULL, 25);
	ASSERTCTZLL(0x0000000004000000ULL, 26);
	ASSERTCTZLL(0x0000000008000000ULL, 27);
	ASSERTCTZLL(0x0000000010000000ULL, 28);
	ASSERTCTZLL(0x0000000020000000ULL, 29);
	ASSERTCTZLL(0x0000000040000000ULL, 30);
	ASSERTCTZLL(0x0000000080000000ULL, 31);
	ASSERTCTZLL(0x0000000100000000ULL, 32);
	ASSERTCTZLL(0x0000000200000000ULL, 33);
	ASSERTCTZLL(0x0000000400000000ULL, 34);
	ASSERTCTZLL(0x0000000800000000ULL, 35);
	ASSERTCTZLL(0x0000001000000000ULL, 36);
	ASSERTCTZLL(0x0000002000000000ULL, 37);
	ASSERTCTZLL(0x0000004000000000ULL, 38);
	ASSERTCTZLL(0x0000008000000000ULL, 39);
	ASSERTCTZLL(0x0000010000000000ULL, 40);
	ASSERTCTZLL(0x0000020000000000ULL, 41);
	ASSERTCTZLL(0x0000040000000000ULL, 42);
	ASSERTCTZLL(0x0000080000000000ULL, 43);
	ASSERTCTZLL(0x0000100000000000ULL, 44);
	ASSERTCTZLL(0x0000200000000000ULL, 45);
	ASSERTCTZLL(0x0000400000000000ULL, 46);
	ASSERTCTZLL(0x0000800000000000ULL, 47);
	ASSERTCTZLL(0x0001000000000000ULL, 48);
	ASSERTCTZLL(0x0002000000000000ULL, 49);
	ASSERTCTZLL(0x0004000000000000ULL, 50);
	ASSERTCTZLL(0x0008000000000000ULL, 51);
	ASSERTCTZLL(0x0010000000000000ULL, 52);
	ASSERTCTZLL(0x0020000000000000ULL, 53);
	ASSERTCTZLL(0x0040000000000000ULL, 54);
	ASSERTCTZLL(0x0080000000000000ULL, 55);
	ASSERTCTZLL(0x0100000000000000ULL, 56);
	ASSERTCTZLL(0x0200000000000000ULL, 57);
	ASSERTCTZLL(0x0400000000000000ULL, 58);
	ASSERTCTZLL(0x0800000000000000ULL, 59);
	ASSERTCTZLL(0x1000000000000000ULL, 60);
	ASSERTCTZLL(0x2000000000000000ULL, 61);
	ASSERTCTZLL(0x4000000000000000ULL, 62);
	ASSERTCTZLL(0x8000000000000000ULL, 63);
	ASSERTCTZLL((unsigned long long)-1LL, 0);
}

int l = 10;

int main(int argc, char **argv)
{
	if (__builtin_expect(argc > 1, 0)) {
		return 1;
	}
	/* strange but apparently legal... */
	if (__builtin_expect(argc < -10, l)) {
		return 42;
	}
	if(0) {
		/* even stranger and apparently still legal as long as it is not
		 * executed ... */
		void *v = __builtin_expect;
	}

	return 0;
}
